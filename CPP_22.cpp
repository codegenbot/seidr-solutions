#include <boost/type_index.hpp>

bool issame(const list_any& a, const list_any& b) {
    if (!a.empty() && !b.empty()) {
        for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
            if (!issame(a[i], b[i]))
                return false;
        }
        return a.size() == b.size();
    }
    return a.empty() && b.empty();
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}