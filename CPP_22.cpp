vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        bool is_integer = false;
        try {
            int integer_value = boost::any_cast<int>(value);
            is_integer = true;
        } catch (...) {
            // not an integer
        }
        if (is_integer)
            result.push_back(boost::any_cast<int>(value));
    }
    return result;
}