vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}