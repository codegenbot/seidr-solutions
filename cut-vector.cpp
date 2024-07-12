int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    int n = numbers.size();
    int left_sum = 0, right_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        right_sum += numbers[i];
    }
    
    for (int i = 0; i < n; ++i) {
        right_sum -= numbers[i];
        
        if (left_sum == right_sum || abs(left_sum - right_sum) < abs(left_sum - right_sum + numbers[i])) {
            for (int j = 0; j <= i; ++j) {
                cout << numbers[j] << endl;
            }
            cout << 0 << endl;
            for (int j = i + 1; j < n; ++j) {
                cout << numbers[j] << endl;
            }
            return 0;
        }
        
        left_sum += numbers[i];
    }
    
    return 0;
}