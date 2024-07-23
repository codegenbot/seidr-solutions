#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int i = any_cast<int>(value);
        if (!i.empty()) {
            result.push_back(i);
        }
    }
    return result;
}