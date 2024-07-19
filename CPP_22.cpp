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
        if constexpr (is_same_v<std::any_cast(any).type(), int>) { 
            result.push_back(*std::any_cast<optional<int>>(value));
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