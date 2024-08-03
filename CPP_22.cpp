#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    list<boost::any> values = {5, "hello", 10, 15, "world", 20};
    vector<int> filtered_integers = filter_integers(values);
    
    vector<int> expected = {5, 10, 15, 20};
    assert(issame(filtered_integers, expected));
    
    return 0;
}