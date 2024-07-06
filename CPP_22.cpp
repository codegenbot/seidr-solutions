vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (val != 0) {
            result.push_back(val);
        }
    }
    return result;
}