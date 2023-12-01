#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

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

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    list<boost::any> values = {1, "hello", 2, 3.14, 4};
    vector<int> filtered = filter_integers(values);

    vector<int> expected = {1, 2, 4};
    assert(issame(filtered, expected));

    return 0;
}