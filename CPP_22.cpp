vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        any_cast<int>(value);
        if (any_cast<bool>(boost::get_if<signed>(value))) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}