#include <boost/any.hpp>
#include <list>

bool issame(const boost::any& a, const boost::any& b);

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}