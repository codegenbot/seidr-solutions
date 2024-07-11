#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto& val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]){
    list<boost::any> values;
    values.push_back(10);
    values.push_back(20.5);
    values.push_back(30);
    values.push_back("hello");

    vector<int> filtered_values = filter_integers(values);

    for(auto num : filtered_values){
        cout << num << " ";
    }

    return 0;
}