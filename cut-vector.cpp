int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    int totalSum = accumulate(input.begin(), input.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < input.size(); ++i) {
        leftSum += input[i];
        rightSum -= input[i];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex + 1; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}