#include <boost/any.hpp>
#include <list>

bool issame(const std::vector<int>& v1, const std::vector<char>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if ((char)v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}