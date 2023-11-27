vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto it = values.begin(); it != values.end(); ++it){
        if((*it).type() == typeid(int)){
            result.push_back(boost::any_cast<int>(*it));
        }
    }
    return result;
}