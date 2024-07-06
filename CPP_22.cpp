vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        bool is_integer = false;
        try {
            int i = boost::any_cast<int>(value);
            is_integer = true;
        } catch (...) {
        }
        if (is_integer)
            result.push_back(boost::any_cast<int>(value));
    }
    return result;
}