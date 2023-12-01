vector<int> filter_integers(list_any values) {
    vector<int> integers;
    for (boost::any value : values) {
        if (value.type() == typeid(int)) {
            integers.push_back(boost::any_cast<int>(value));
        }
    }
    return integers;
}