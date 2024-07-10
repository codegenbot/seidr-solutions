vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto &value : values){
        if(auto ptr = boost::any_cast<int>(&value)){
            result.push_back(*ptr);
        }
    }
    return result;
}