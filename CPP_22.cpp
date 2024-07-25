vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).second) {
            result.push_back(any_cast<int>(value).first);
        }
    }
    return result;
}