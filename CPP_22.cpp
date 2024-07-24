vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto &value : values) {
        if (auto val = boost::any_cast<int>(&value)) {
            result.push_back(*val);
        }
    }
    return result;
}