vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any any_value = value;
        if (boost::get<int>(&any_value)) {
            result.push_back(boost::any_cast<int>(any_value));
        }
    }
    return result;
}