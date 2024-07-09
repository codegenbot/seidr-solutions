#include <boost/any.hpp>
#include <vector>
#include <algorithm>
#include <list>

bool issame(vector<boost::any> a, vector<boost::any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (!boost::any_cast<bool>(a[i]) || !boost::any_cast<bool>(b[i]))
            continue;
        if (boost::any_cast<int>(a[i]) != boost::any_cast<int>(b[i]))
            return false;
    }
    return true;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (boost::any_cast<bool>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}