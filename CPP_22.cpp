vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        int num = boost::any_cast<int>(value);
        if (num != 0) result.push_back(num);
    }
    return result;
}