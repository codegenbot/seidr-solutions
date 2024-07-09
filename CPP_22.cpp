vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto &value : values) {
        boost::any any_value = value;
        int value_as_int = any_value.get<int>();
        if (!boost::get<bool>(any_value)) {
            result.push_back(value_as_int);
        }
    }
    return result;
}