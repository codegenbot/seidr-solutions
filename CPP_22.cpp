vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& value : values){
        if(is_same_v<boost::any_cast<void*>(value), int>::value){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}