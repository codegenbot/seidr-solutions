vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<bool>(value)) {
            int integer = boost::any_cast<int>(value);
            bool is_odd = integer % 2 != 0;
            if(!is_odd) {
                result.push_back(integer);
            }
        }
    }
    return result;
}