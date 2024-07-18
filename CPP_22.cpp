vector<int> filter_integers(list_any values){
    vector<int> result;
    for(const auto &value : values){
        if(auto int_ptr = boost::any_cast<int>(&value)){
            result.push_back(*int_ptr);
        }
    }
    return result;
}