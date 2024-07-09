vector<int> filter_integers(list-any values){
    vector<int> result;
    for(auto& value : values){
        if(boost::any_cast<bool>(value)){
            if(std::holds_alternative<int>(value)){
                result.push_back(std::get<int>(value));
            }
        }
    }
    return result;
}