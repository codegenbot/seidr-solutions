int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += max(0, num / 3 - 2);
    }
    
    cout << sum << endl;
    
    return 0;
}