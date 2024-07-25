vector<int> intersperse(vector<int> numbers, int delimeter){ 
    vector<int> result;
    if(numbers.size() > 0){
        for(size_t i = 0; i < numbers.size() - 1; ++i){
            result.push_back(numbers[i]);
            result.push_back(delimeter);
        }
        result.push_back(numbers.back());
    }
    return result;
}