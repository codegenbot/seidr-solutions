#include <boost/any.hpp>
#include <list>
#include <typeinfo>
#include <vector>

bool issame(const std::type_info &lhs, const std::type_info &rhs);

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto &val : values) {
        if (issame(val.type(), typeid(int))) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}