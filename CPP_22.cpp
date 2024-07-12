vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) { // 0 is a special case in C++ because it's an integer that can be converted from any other type
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}