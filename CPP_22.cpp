vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any a = value;
        int val;
        if (boost::get<int>(&val, a)) {
            result.push_back(val);
        }
    }
    return result;
}