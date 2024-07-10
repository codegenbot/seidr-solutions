#include <algorithm>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::holds_alternative<int>(value)) {
            int val = boost::get<int>(value);
            if(val != 0) {
                result.push_back(val);
            }
        }
    }
    return result;
}