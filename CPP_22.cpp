```c++
#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace boost;

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (is_same(any_cast<int>(value), int()).which()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}