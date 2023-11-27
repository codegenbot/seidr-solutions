vector<int> filter_integers(list_any values){
    vector<int> integers;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            integers.push_back(boost::any_cast<int>(value));
        }
    }
    return integers;
}