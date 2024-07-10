#include <list>
#include <vector>
#include <cassert>
#include <typeinfo>
#include <boost/any.hpp>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto &val : values){
        if(typeid(int) == val.type())
            result.push_back(boost::any_cast<int>(val));
    }
    return result;
}