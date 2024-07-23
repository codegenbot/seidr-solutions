vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto &value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}