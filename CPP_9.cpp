vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int currentMax = INT_MIN;
    
    for(int i = 0; i < numbers.size(); i++){
        currentMax = max(currentMax, numbers[i]);
        rollingMax.push_back(currentMax);
    }
    
    return rollingMax;
}