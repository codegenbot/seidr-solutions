vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto val : values) {
        if (auto int_val = boost::any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}