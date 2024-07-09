#include <boost/config.hpp>
#ifdef _MSC_VER
#include <boost/any.hpp>
#else
#include <boost/any.hpp> // for C++14 or later
#endif

#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}