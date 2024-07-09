```cpp
#include <boost/any.hpp>
#include <list>
#include <vector>
#include <algorithm>

namespace boost {
template <typename T>
bool is_same(boost::any const& a, boost::any const& b) {
    return typeid(T) == boost::any_cast<T>(a).type() &&
           typeid(T) == boost::any_cast<T>(b).type();
}
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value, 0)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}).begin(), filter_integers({3, 'c', 3, 3, 'a', 'b'}).end(), {3, 3, 3}.begin()));
    // ...
}