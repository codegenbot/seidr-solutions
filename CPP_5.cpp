vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    int n = numbers.size();
    for(int i=0; i<n-1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    if(n > 0){
        result.push_back(numbers[n-1]);
    }
    return result;
}