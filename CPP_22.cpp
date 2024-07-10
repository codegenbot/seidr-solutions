bool issame(const boost::any& value, const std::type_info& type){
    return value.type() == type;
}

vector<int> filter_integers(const std::list<boost::any>& values);

vector<int> filter_integers(const std::list<boost::any>& values){
    vector<int> result;
    for(const auto& val : values){
        if(issame(val, typeid(int))){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}