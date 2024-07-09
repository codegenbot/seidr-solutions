#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list-any values){
    vector<int> result;
    for (const auto &value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
        }
    }
    return result;
}