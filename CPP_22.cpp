vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<boost::optional<int>>(value).is_valid()) {
            result.push_back(boost::any_cast<boost::optional<int>>(value).get());
        }
    }
    return result;
}