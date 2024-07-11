#include <iostream>
#include <vector>
#include <list>
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
        if(typeid(int) == val.type()){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    list<any> values;
    values.push_back(10);
    values.push_back(20);
    values.push_back("hello");
    values.push_back(30);
    
    vector<int> filtered_values = filter_integers(values);
    
    for(auto val : filtered_values){
        cout << val << " ";
    }
  
    return 0;
}