vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int curMax = numbers[0];
    for(int i = 0; i < numbers.size(); i++) {
        curMax = max(curMax, numbers[i]);
        rollingMax.push_back(curMax);
    }
    return rollingMax;
}