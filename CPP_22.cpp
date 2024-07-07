vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto& value : values){
        if(is_any_integer(value)){
            result.push_back(get_as_integer(value));
        }
    }
    return result;
}

bool is_any_integer(const boost::any& any) {
    try {
        int _ = boost::any_cast<int>(any);
        return true;
    } catch (...) {
        return false;
    }
}

int get_as_integer(const boost::any& any) {
    return boost::any_cast<int>(any);
}