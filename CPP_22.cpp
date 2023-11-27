#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(vector<boost::any> values);

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(vector<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}