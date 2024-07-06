bool issame(const type_info& t1, const type_info& t2) {
    return &typeid(int) == &t2;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(typeid(value), typeid(int))) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}