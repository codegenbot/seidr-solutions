#include <boost/any.hpp>
#include <vector>

typedef std::list<boost::any> list_any;

using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same_v<decltype(value), int>) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}