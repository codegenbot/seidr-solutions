vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int currentMax = numbers[0];
    rollingMax.push_back(currentMax);
    
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > currentMax){
            currentMax = numbers[i];
        }
        rollingMax.push_back(currentMax);
    }
    
    return rollingMax;
}