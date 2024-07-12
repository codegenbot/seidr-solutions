```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {3, 'c', 3, 3, 'a', 'b'};
    std::vector<int> expected = {3, 3, 3};
    assert(is_same(filter_integers(values), expected));
    return 0;
}