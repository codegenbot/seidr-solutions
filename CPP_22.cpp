#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        int i = boost::any_cast<int>(value);
        if (!i.empty()) {
            result.push_back(i);
        }
    }
    return result;
}