#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        try {
            int val = boost::get<int>(value);
            result.push_back(val);
        } catch (...) {}
    }
    return result;
}