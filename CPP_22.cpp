#include<vector>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value, 0);
        if (!has_value(value)) continue;
        int v = boost::any_cast<int>(value);
        result.push_back(v);
    }
    return result;
}

bool has_value(const boost::any& a) {
    try {
        boost::any_cast<void>(a);
        return true;
    } catch (const boost::bad_any_cast&) {
        return false;
    }
}