#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    list<any> values = {10, string("hello"), 20, 30, string("world"), 40};
    
    vector<int> filtered = filter_integers(values);
    
    for(auto num : filtered){
        cout << num << " ";
    }
    
    return 0;
}