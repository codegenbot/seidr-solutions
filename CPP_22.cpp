#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function goes here
    // return true if a and b contain the same elements, false otherwise
}

int main() {
    assert (issame(filter_integers({3, 3, 3, 3, 'c', 'a', 'b'}) ,{3, 3, 3}));
    return 0;
}