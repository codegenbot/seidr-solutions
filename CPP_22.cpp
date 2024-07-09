#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        int v = boost::any_cast<int>(value);
        if (v >= 0) {
            result.push_back(v);
        }
    }
    return result;
}