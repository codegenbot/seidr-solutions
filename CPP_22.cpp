#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

using namespace std;

typedef list<boost::any> list_any;
vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int i = boost::any_cast<int>(value);
        if (!i.empty()) {
            result.push_back(i);
        }
    }
    return result;
}