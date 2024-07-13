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
    int half = sum / 2;
    sum = 0;
    int idx;
    for (idx = 0; idx < n; idx++) {
        sum += nums[idx];
        if (sum >= half) {
            break;
        }
    }
    vector<int> sub1(nums.begin(), nums.begin() + idx + 1);
    vector<int> sub2(nums.begin() + idx + 1, nums.end());
    for (int i = 0; i < sub1.size(); i++) {
        cout << sub1[i] << endl;
    }
    for (int i = 0; i < sub2.size(); i++) {
        cout << sub2[i] << endl;
    }
    return 0;
}