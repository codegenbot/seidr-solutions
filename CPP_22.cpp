#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(const auto& value : values) {
        if(isConvertibleToInt(value)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}

bool isConvertibleToInt(const boost::any &value) {
    try {
        boost::any_cast<int>(value);
        return true;
    } catch (boost::bad_any_cast &) {
        return false;
    }
}