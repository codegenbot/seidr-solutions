vector<int> filter_integers(list_any values){
    vector<int> integers;
    for (const auto &value : values) {
        try {
            int num = boost::any_cast<int>(value);
            integers.push_back(num);
        } catch (const boost::bad_any_cast &) {
            continue;
        }
    }
    return integers;
}