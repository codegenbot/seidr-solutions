vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value) > 0 ? result.push_back(boost::any_cast<int>(value)) : NULL;
    }
    return result;
}