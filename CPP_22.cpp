#include <vector>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto value : values) {
        if (any_cast<int>(value).second) {
            result.push_back(any_cast<int>(value).first);
        }
    }
    return result;
}