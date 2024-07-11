#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
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
    list<boost::any> values = {1, "hello", 2, 3.5, 4};
    vector<int> filtered = filter_integers(values);

    for(auto num : filtered){
        cout << num << " ";
    }
    
    return 0;
}