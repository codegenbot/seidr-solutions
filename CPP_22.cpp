#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
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