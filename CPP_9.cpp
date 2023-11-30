vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxSoFar = numbers[0];
    rollingMax.push_back(maxSoFar);
    
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > maxSoFar){
            maxSoFar = numbers[i];
        }
        rollingMax.push_back(maxSoFar);
    }
    
    return rollingMax;
}