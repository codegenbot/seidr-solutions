#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& value : values){
        if(is BOOST_ANY_TYPE(value).type().which() == boost::any::type::type_index()){
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}