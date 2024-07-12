#include <boost/type_index.hpp>

bool issame(const list_any& a, const list_any& b) {
    if (!a.empty() && !b.empty()) {
        auto it_a = a.begin();
        auto it_b = b.begin();
        while (it_a != a.end() && it_b != b.end()) {
            if (!boost::any_cast<int>(*it_a).type().is_same(typeid(int)) ||
                !boost::any_cast<int>(*it_b).type().is_same(typeid(int))) {
                return false;
            }
            ++it_a;
            ++it_b;
        }
        return it_a == a.end() && it_b == b.end();
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