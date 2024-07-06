vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (!boost::holds_alternative<int>(value)) continue;
        int x = boost::get<int>(value);
        if (x == 0) continue;
        result.push_back(x);
    }
    return result;
}