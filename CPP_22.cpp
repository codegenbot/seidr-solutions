#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(const auto& value : values){
        if(isConvertibleToInteger(value)){
            try{
                int val = boost::any_cast<int>(value);
                result.push_back(val);
            }catch(...){}
        }
    }
    return result;
}

bool isConvertibleToInteger(const boost::any& value) {
    bool isConvertible = false;
    
    try {
        int _ = boost::any_cast<int>(value);
        isConvertible = true;
    } catch (...) {
        // value is not convertible to integer
    }
    
    return isConvertible;
}