vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) { // Check if the value can be cast to int
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}