```cpp
#include <boost/any.hpp>
#include <list>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::vector<int>(filter_integers({3, 'c', 3, 3, 'a', 'b'})) == (std::vector<int>{3, 3, 3}));
    return 0;
}