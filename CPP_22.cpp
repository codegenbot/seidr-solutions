#include <vector>
#include <list>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (auto* p = std::get_if<int>(&value)) {
            result.push_back(*p);
        }
    }
    return result;
}