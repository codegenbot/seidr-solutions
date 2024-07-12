#include <boost/any.hpp>
#include <vector>
#include <list>

bool boost::any::issame(const boost::any& a1, const boost::any& a2) {
    if (a1.type() != a2.type()) return false;
    if (a1.type() == typeid(std::vector<int>) || a1.type() == typeid(std::list<int>)) {
        auto v1 = boost::any_cast<std::vector<int>>(a1);
        auto v2 = boost::any_cast<std::vector<int>>(a2);
        return std::equal(v1.begin(), v1.end(), v2.begin());
    }
    return false;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}