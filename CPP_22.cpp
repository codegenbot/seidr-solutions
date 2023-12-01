#include <iostream>
#include <vector>
#include <list>
#include <assert.h>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto value : values){
        if(auto* integer = boost::any_cast<int>(&value)){
            result.push_back(*integer);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}