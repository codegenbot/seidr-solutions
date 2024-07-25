vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type()) {
            result.push_back(any_cast<int>(value).cast_to<int>());
        }
    }
    return result;
}