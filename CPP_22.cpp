#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}