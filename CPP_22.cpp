#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}