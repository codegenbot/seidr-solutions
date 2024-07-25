vector<int> filter_integers(list_any values){
    vector<int> result;
    for(const auto& value : values){
        if(is_arithmetic(value) && static_cast<bool>(std::is_same< decltype(std::get<int>(value)), int>::type)){
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}