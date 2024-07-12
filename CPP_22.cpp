#include <boost/type_index.hpp>

bool issame(const list_any& a, const list_any& b) {
    if (a.type() != b.type()) {
        return false;
    }
    if (a.type() == typeid(list_any)) {
        auto iter_a = boost::any_cast<list_any>(a).begin();
        auto iter_b = boost::any_cast<list_any>(b).begin();
        while (iter_a != boost::any_cast<list_any>(a).end()) {
            if (!issame(*iter_a++, *iter_b++)) {
                return false;
            }
        }
    } else {
        return boost::any_cast<int>(a) == boost::any_cast<int>(b);
    }
    return true;
}

int main() {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return 0;
}