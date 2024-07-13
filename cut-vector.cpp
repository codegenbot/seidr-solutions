int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int left = 0, right = n - 1;
    int sum_left = nums[left], sum_right = nums[right];
    
    while (left < right) {
        if (sum_left < sum_right) {
            left++;
            sum_left += nums[left];
        } else {
            right--;
            sum_right += nums[right];
        }
    }
    
    for (int i = 0; i <= left; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}