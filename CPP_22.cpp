#include <boost/variant.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (holds_alternative<int>(value)) {
            int i = get<int>(value);
            result.push_back(i);
        }
    }
    return result;
}