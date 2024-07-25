vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        any_cast<int>(value);
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}