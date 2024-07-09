```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

namespace boost { namespace detail {
template<typename T>
struct is_same : std::false_type {};
};

template<>
struct boost::detail::is_same<int> : std::true_type {};

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 3, 3}) == std::vector<int>({3, 3, 3}));
    return 0;
}