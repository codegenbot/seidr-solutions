#include <boost/any.hpp>
#include <boost/more_results.hpp>

bool issame(vector<boost::any> a, vector<boost::any> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!(a[i].type() == typeid(int) && b[i].type() == typeid(int))) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}