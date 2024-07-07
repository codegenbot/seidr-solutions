#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto value : values) {
        if(is_convertible<decltype(value), int>()) {
            boost::any_cast<int>(value);
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}