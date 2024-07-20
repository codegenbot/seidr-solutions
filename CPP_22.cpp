vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto &value : values) {
        boost::any any = value;
        if(any.type() == typeid(int)) {
            int num = boost::any_cast<int>(any);
            result.push_back(num);
        }
    }
    return result;
}