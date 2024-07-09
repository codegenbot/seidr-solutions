#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace boost;

namespace std {

template <typename T>
struct is_same : public integral_constant<bool, false> {};

}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}) == std::vector<int>({3, 3, 3}));
    // ...
}