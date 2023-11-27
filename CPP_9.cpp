vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxNum = INT_MIN;
    
    for(int i = 0; i < numbers.size(); i++){
        maxNum = max(maxNum, numbers[i]);
        rollingMax.push_back(maxNum);
    }
    
    return rollingMax;
}