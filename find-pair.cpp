int main() {
    int n, a, b, target;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    
    map<int, int> hash;
    for (int i = 0; i < nums.size(); ++i) {
        int diff = target - nums[i];
        if (hash.find(diff) != hash.end()) {
            a = diff;
            b = nums[i];
            break;
        }
        hash[nums[i]] = i;
    }
    
    cout << a << endl << b << endl;
    
    return 0;
}