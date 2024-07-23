vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<tuple<int, bool>>(value).second) {
            result.push_back(any_cast<tuple<int, bool>>(value).first);
        }
    }
    return result;
}