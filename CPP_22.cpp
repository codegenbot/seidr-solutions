vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto value : values){
        if(auto intValue = boost::any_cast<int>(&value)){
            result.push_back(*intValue);
        }
    }
    return result;
}