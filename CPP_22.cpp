std::vector<int> filter_integers(const std::vector<int>& input){
    std::vector<int> result;
    for(auto &item : input){
        if(item % 3 == 0){
            result.push_back(item);
        }
    }
    return result;
}