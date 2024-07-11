#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
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
    list<boost::any> values = {1, "hello", 2, 3.5, 4};
    vector<int> filtered_values = filter_integers(values);
    
    for(int num : filtered_values){
        cout << num << " ";
    }
    
    return 0;
}