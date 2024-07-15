vector<int> intersperse(vector<int> numbers, int delimeter){
    if(numbers.empty()){
        return {};
    }
    
    vector<int> result;
    for(int i = 0; i < numbers.size() - 1; ++i){
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    result.push_back(numbers[numbers.size() - 1]);
    
    return result;
}