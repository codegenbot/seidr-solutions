#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto& val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(int argc, char* argv[]){
    list<any> values;
    values.push_back(10);
    values.push_back("hello");
    values.push_back(20);
    
    vector<int> result = filter_integers(values);
    
    vector<int> expected = {10, 20};
    if(issame(result, expected)){
        cout << "Values are the same." << endl;
    } else {
        cout << "Values are different." << endl;
    }
    
    return 0;
}