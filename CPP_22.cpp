vector<int> filter_integers(list_any values){
    vector<int> result;
    for(const auto& val : values){
        if (auto ptr = boost::any_cast<int>(&val)){
            result.push_back(*ptr);
        }
    }
    return result;
}