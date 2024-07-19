#include <vector>
#include <boost/any.hpp>
#include <list>
#include <boost/config.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).second) {
            result.push_back(any_cast<int>(value).first);
        }
    }
    return result;
}