vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& value : values){
        boost::any_cast<int>(value) ? result.push_back(boost::any_cast<int>(value)) : 0;
    }
    return result;
}