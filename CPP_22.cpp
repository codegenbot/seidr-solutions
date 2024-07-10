vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<bool>(value)) {
            int integer = boost::any_cast<int>(value);
            result.push_back(integer);
        }
    }
    return result;
}