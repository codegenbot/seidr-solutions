#include <iostream>
#include <vector>
#include <list>
#include <typeinfo>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> integers;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            integers.push_back(boost::any_cast<int>(value));
        }
    }
    return integers;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
  
    return 0;
}