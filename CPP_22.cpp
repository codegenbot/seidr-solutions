#include <typeindex>

bool is_same(const std::any& value) {
    try {
        if (std::any_cast<int>(value).type() == typeid(int)) {
            return true;
        } else {
            return false;
        }
    } catch (const std::bad_any_cast&) {
        return false;
    }
}

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}