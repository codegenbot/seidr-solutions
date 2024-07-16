int main() {
    vector<int> nums;
    int input;
    while (cin >> input) {
        nums.push_back(input);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += max(0, num/3 - 2);
    }
    
    cout << sum << endl;
    
    return 0;
}