```cpp
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}