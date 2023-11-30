vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    int n = numbers.size();
    for(int i = 0; i < n; i++){
        result.push_back(numbers[i]);
        if(i < n - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}