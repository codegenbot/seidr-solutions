vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i=0; i<numbers.size()-1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    if(!numbers.empty()){
        result.push_back(numbers[numbers.size()-1]);
    }
    return result;
}