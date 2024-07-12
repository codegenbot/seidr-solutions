#include <boost/any.hpp>
#include <boost/container/list.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<any> filter_integers(vector<any> values) {
    vector<optional<int>> result;
    for (const auto& value : values) {
        if (!value.type() || boost::any_cast<bool>(value) != 0) { 
            result.push_back(optional<int>(boost::any_cast<int>(value)));
        }
    }
    return result;
}