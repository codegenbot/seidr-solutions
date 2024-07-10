vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<int>(value);
    }
    return {};
}