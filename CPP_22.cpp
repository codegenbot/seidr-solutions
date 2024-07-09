```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeindex>

bool operator!=(const std::type_index& a, const std::type_index& b) {
    return a != b;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() != typeid(int)) continue;
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
}