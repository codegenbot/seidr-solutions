#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b);

int main() {
    list<any> values = {1, 2, 3, "hello", 4.5};
    vector<int> result = filter_integers(values);
    vector<int> expected = {1, 2, 3};
    assert(issame(result, expected));
    return 0;
}

vector<int> filter_integers(list<any> values){
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