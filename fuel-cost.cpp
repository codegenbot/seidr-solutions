int main() {
    vector<int> nums;
    int n, num;
    cin >> n;
    while (n--) {
        cin >> num;
        nums.push_back((num / 3) - 2);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }
    
    cout << sum << endl;
    
    return 0;
}