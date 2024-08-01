vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any any_value = value;
        if (boost::get<boost::optional<int>>(&any_value)) {
            const int* integer = boost::get<boost::optional<int>>(&any_value).get();
            if (*integer) {
                result.push_back(*integer);
            }
        }
    }
    return result;
}