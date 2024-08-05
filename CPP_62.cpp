std::vector<float> derivative(const std::vector<float>& input){
    if(input.size() < 2){
        return std::vector<float>{};
    }
    
    std::vector<float> result;
    for(size_t i = 1; i < input.size(); ++i){
        result.push_back(input[i] - input[i-1]);
    }
    
    return result;
}