#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).which() == boost::any::typeid(int)) {
            int casted = boost::any_cast<int>(value);
            if (casted.good()) {
                result.push_back(casted);
            }
        }
    }
    return result;
}