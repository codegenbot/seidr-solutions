vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    
    if(numbers.empty()){
        return result;
    }
    
    for(int i = 0; i < numbers.size() - 1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    
    result.push_back(numbers[numbers.size() - 1]);
    
    return result;
}