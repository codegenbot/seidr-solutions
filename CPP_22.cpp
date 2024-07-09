```cpp
#include <vector>
#include <list>

struct Value {
    bool is_bool;
    std::optional<bool> bool_val;
    std::optional<int> int_val;

    Value(bool b = false, int i = 0) : is_bool(true), bool_val(b), int_val(i) {}
};

bool issame(const std::vector<Value>& a, const std::vector<Value>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        auto &value_a = a[i];
        auto &value_b = b[i];

        if (!value_a.is_bool && !value_b.is_bool)
            return false;

        if (!value_a.is_bool) {
            if (!value_b.bool_val || *value_a.bool_val != *value_b.bool_val)
                return false;
        }
        else {
            if (value_a.int_val.has_value() && value_b.int_val.has_value()) {
                if (*value_a.int_val != *value_b.int_val)
                    return false;
            }
        }
    }
    return true;
}

std::vector<int> filter_integers(const std::list<Value>& values) {
    std::vector<int> result;
    for (const auto &value : values) {
        if (!value.is_bool && value.int_val.has_value()) {
            result.push_back(*value.int_val);
        }
    }
    return result;
}