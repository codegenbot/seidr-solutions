#include <boost/any.hpp>

typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}