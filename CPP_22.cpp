vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto val : values){
        if(auto int_ptr = boost::any_cast<int>(&val)){
            result.push_back(*int_ptr);
        }
    }
    return result;
}