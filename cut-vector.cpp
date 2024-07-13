int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }
    
    int diff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < input.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j) {
            leftSum += input[j];
        }
        
        for (int j = i; j < input.size(); ++j) {
            rightSum += input[j];
        }
        
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << input[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex; i < input.size(); ++i) {
        cout << input[i] << endl;
    }
    
    return 0;
}