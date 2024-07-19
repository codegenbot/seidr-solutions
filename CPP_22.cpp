#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values);

int main() {
    list<any> values = {10, "hello", 20, 30, "world", 40};
    vector<int> result = filter_integers(values);
    
    for(auto val : result){
        cout << val << " ";
    }

    return 0;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(auto ptr = boost::any_cast<int>(&val)){
            result.push_back(*ptr);
        }
    }
    return result;
}