#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            int integer_value = boost::any_cast<int>(value);
            result.push_back(integer_value);
        }
    }
    return result;
}