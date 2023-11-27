vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxElement = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        maxElement = max(maxElement, numbers[i]);
        rollingMax.push_back(maxElement);
    }
    return rollingMax;
}