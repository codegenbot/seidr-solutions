vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}