#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::list<any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        any_to_integer(value, result);
    }
    return result;
}

void any_to_integer(any &value, vector<int>& result) {
    if (holds_alternative<int>(value)) {
        result.push_back(get<int>(value));
    }
}