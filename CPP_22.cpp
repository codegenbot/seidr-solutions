#include <vector>
#include <list>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& value : values){
        if(value.type() == boost::any::type::type_index()){
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}