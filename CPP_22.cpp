vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<int>(value));
        int val = boost::any_cast<int>(value);
        if (!boost::holds_alternative<boost::use_default>(val)) {
            result.push_back(val);
        }
    }
    return result;
}