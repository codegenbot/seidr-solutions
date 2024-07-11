#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};

    assert(issame(v1, v2));
    
    return 0;
}