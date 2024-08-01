vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any any_value = value;
        int val;
        if (boost::get<int>(&val, any_value)) {
            result.push_back(val);
        }
    }
    return result;
}