#include <vector>
#include <boost/any.hpp>

bool issame(const boost::any& a, const boost::any& b) {
    if (!boost::any_cast<bool>(a).good() || !boost::any_cast<bool>(b).good())
        return false;
    return *boost::any_cast<bool*>(const_cast<boost::any*>(&a)) == *boost::any_cast<bool*>(const_cast<boost::any*>(&b));
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value).good())
            continue;
        if (boost::any_cast<bool*>(const_cast<boost::any*>(&value))->bool_ == true)
            result.push_back(boost::any_cast<int>(value));
    }
    return result;
}