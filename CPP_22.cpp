#include <vector>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;

using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        int num = any_cast<int>(value);
        result.push_back(num);
    }
    return result;
}