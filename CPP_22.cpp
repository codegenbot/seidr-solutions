#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using boost::any;
using boost::any_cast;

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& val : values){
        if(typeid(int) == val.type()){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Main function code
    return 0;
}