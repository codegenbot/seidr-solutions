#include <vector>
#include <list>
#include <boost/any.hpp>
using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> integers;
    for(const auto& val : values){
        if(val.type() == typeid(int)){
            integers.push_back(boost::any_cast<int>(val));
        }
    }
    return integers;
}

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}