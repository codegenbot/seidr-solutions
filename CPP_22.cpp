#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // implementation goes here
}