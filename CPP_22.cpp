#include <boost/any.hpp>
bool issame(std::vector<int> a,std::vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}