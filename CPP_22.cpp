vector<int> filter_integers(list_any values){
    vector<int> filtered_values;
    for (const auto &value : values) {
        if (value.type() == typeid(int)) {
            filtered_values.push_back(boost::any_cast<int>(value));
        }
    }
    return filtered_values;
}