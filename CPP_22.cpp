vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto val : values){
        if (boost::any_cast<int>(&val)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}