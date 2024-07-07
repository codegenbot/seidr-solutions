#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto value : values){
        if(is_integer(value)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool is_integer(const boost::any &value) {
    try {
        int _ = boost::any_cast<int>(value);
        return true;
    } catch (const bad_any_cast &) {
        return false;
    }
}