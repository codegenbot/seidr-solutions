vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            bool areEqual = true;
            for (int i : boost::any_cast<vector<int>>(value)) {
                if (!areEqual(filter_integers({i}).begin(), filter_integers({i}).end())) {
                    result.push_back(i);
                }
            }
        }
    }
    return result;
}