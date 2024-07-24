vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto &value : values) {
        try {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        } catch(const boost::bad_any_cast &e) {
            continue;
        }
    }
    return result;
}