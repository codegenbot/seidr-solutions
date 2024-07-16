int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (prefixSum * 2 >= sum) {
            vector<int> subvector1(nums.begin(), nums.begin() + i + 1);
            vector<int> subvector2(nums.begin() + i + 1, nums.end());
            
            for (int j = 0; j < subvector1.size(); j++) {
                cout << subvector1[j] << endl;
            }
            for (int j = 0; j < subvector2.size(); j++) {
                cout << subvector2[j] << endl;
            }
            break;
        }
    }
    
    return 0;
}