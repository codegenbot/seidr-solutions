vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxSoFar = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        maxSoFar = max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }
    return rollingMax;
}