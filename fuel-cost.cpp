int main() {
    vector<int> nums;
    int temp;
    
    while (cin >> temp) {
        nums.push_back(temp);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}