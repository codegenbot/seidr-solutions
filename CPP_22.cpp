#include <vector>
#include <boost/any.hpp>

using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_any_of_type<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}