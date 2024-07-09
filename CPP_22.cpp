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
            boost::any &any = value;
            int i;
            any >>= i;
            result.push_back(i);
        }
    }
    return result;
}

bool isboostanyinteger(const boost::any &value) {
    try {
        int _ = boost::any_cast<int>(value);
        return true;
    } catch (const boost::bad_any_cast &) {
        return false;
    }
}