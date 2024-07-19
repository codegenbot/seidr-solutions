#include <vector>
#include <boost/any.hpp>
#include <list>
#include <boost/config.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_any_of<int>(value)) {
            result.push_back(any_cast<int>(value).get());
        }
    }
    return result;
}

bool is_any_of(int type, const boost::any& any) {
    try {
        boost::any_cast(type, any);
        return true;
    } catch (boost::bad_any_cast&) {
        return false;
    }
}