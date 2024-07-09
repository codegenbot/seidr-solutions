#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a,std::vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        int casted = boost::any_cast<int>(value);
        result.push_back(casted);
    }
    return result;
}