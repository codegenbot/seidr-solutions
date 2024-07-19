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
        if (value.type() == typeid(int)) {
            try {
                int i = std::any_cast<int>(value);
                result.push_back(i);
            } catch (const bad_any_cast&) {
                // ignore non-int values
            }
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