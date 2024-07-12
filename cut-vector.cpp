int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total = accumulate(nums.begin(), nums.end(), 0);
    int half = total / 2;
    int sum = 0;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum >= half) {
            idx = i;
            break;
        }
    }
    
    vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvec2(nums.begin() + idx + 1, nums.end());
    
    for (int i = 0; i < subvec1.size(); ++i) {
        cout << subvec1[i] << endl;
    }
    
    for (int i = 0; i < subvec2.size(); ++i) {
        cout << subvec2[i] << endl;
    }
    
    return 0;
}