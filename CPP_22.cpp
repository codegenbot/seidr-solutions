#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto value : values){
        if(isboostanyinteger(value)){
            boost::any any = value;
            int num = boost::any_cast<int>(any);
            result.push_back(num);
        }
    }
    return result;
}

bool isboostanyinteger(const boost::any& val) {
    try {
        boost::any_cast<int>(val);
        return true;
    } catch (const bad_any_cast&) {
        return false;
    }
}