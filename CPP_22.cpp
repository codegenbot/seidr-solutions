vector<int> filter_integers(list_any values){
    vector<int> integers;
    for(const auto& val : values){
        if(typeid(int) == val.type()){
            integers.push_back(boost::any_cast<int>(val));
        }
    }
    return integers;
}