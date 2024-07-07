#include <boost/type_erasure.hpp>
#include <boost/more_results.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int val = any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}