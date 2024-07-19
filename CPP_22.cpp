#include <vector>
#include <list>
#include <any>
#include <algorithm>
#include <cassert>
#include <type_traits>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if constexpr (is_same_v<type_erase_t<decltype(std::any_cast(value))>, int>) { 
            result.push_back(std::any_cast<int>(value).get());
        }
    }
    return result;
}

bool equals(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(equals(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}