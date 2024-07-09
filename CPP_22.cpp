#include <boost/any.hpp>
#include <vector>

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
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            if (!boost::any_cast<bool>(num))
                continue;
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any(true), 3, 3, boost::any(false), boost::any(false)}), {3, 3, 3}));
    return 0;
}