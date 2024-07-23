vector<int> filter_integers(list_any values){
    vector<int> integers;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            integers.push_back(boost::any_cast<int>(val));
        }
    }
    return integers;
}