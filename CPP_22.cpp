#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto val : values){
        if(boost::any_cast<int>(val) != 0)
            result.push_back(boost::any_cast<int>(val));
    }
    return result;
}