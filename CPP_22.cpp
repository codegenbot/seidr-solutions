bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (!boost::numeric_cast<boost::optional<int>>(val)) continue; // Skip non-int values
        result.push_back(val);
    }
    return result;
}