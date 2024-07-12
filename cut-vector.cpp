int main() {
    vector<int> input;
    int n;
    while (cin >> n) {
        input.push_back(n);
    }
    
    int sum = 0;
    for (int num : input) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum <= halfSum) {
        currSum += input[idx];
        idx++;
    }
    
    if (abs(currSum - halfSum) < abs(currSum - halfSum - input[idx])) {
        idx--;
    }
    
    vector<int> firstHalf(input.begin(), input.begin() + idx);
    vector<int> secondHalf(input.begin() + idx, input.end());
    
    for (int num : firstHalf) {
        cout << num << endl;
    }
    
    for (int num : secondHalf) {
        cout << num << endl;
    }
    
    return 0;
}