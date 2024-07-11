vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<int>(value);
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value).get_value());
        }
    }
    return result;
}