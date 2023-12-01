vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto it = values.begin(); it != values.end(); ++it){
        if (auto num = boost::any_cast<int>(&(*it))){
            result.push_back(*num);
        }
    }
    return result;
}