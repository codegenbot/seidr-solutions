#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const boost::any& a1, const boost::any& a2) {
    return a1.type() == a2.type();
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (issame(value, boost::any()) && value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}