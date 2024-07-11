int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += max(num / 3 - 2, 0);
    }
    
    cout << sum;
    
    return 0;
}