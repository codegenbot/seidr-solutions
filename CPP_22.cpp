vector<int> filter_integers(list_any values){
    vector<int> filtered_integers;
    for (auto &val : values) {
        if (auto ptr = boost::any_cast<int>(&val)) {
            filtered_integers.push_back(*ptr);
        }
    }
    return filtered_integers;
}