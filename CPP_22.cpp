vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<boost::optional<int>>(value).get() != -2147483648) { // check if integer
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}