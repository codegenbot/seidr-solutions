#include <boost/any.hpp>
#include <vector>
#include <algorithm>

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

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        bool isInt = boost::any_cast<bool>(value);
        int integerValue = 0;
        if (isInt && boost::any_cast<void*>(value)) {
            integerValue = boost::any_cast<int>(value);
            result.push_back(integerValue);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
    return 0;
}