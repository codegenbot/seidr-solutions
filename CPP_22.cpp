#include <vector>
#include <boost/any.hpp>

using namespace boost;

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}