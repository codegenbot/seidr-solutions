#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<vector<int>> filter_integers(list_any values) {
    vector<vector<int>> result;
    for (const auto& value : values) {
        if (boost::any_cast< boost::any >(value).type() == typeid(int)) {
            vector<int> temp;
            for (int i = 0; i < boost::any_cast< int >(value).good(); ++i) {
                temp.push_back(boost::any_cast< int >(boost::any_cast< boost::any >(value)).operator[](i));
            }
            if (!issame(result.back(), temp)) {
                result.push_back(temp);
            }
        }
    }
    return result;
}