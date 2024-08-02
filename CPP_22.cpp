#include<boost/any.hpp>
#include<vector>
#include<string>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == boost::any::typecode::void_) continue;
        if (boost::any_cast<int>(value).ok()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}