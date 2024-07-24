int main() {
    vector<int> nums;
    int n;
    while(cin >> n) {
        nums.push_back(n);
    }

    int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        prefix_sum += nums[i];
        if (prefix_sum * 2 >= sum) {
            if (prefix_sum * 2 == sum) {
                for (int j = 0; j <= i; j++) {
                    cout << nums[j] << endl;
                }
                cout << 0 << endl;
            } else {
                for (int j = 0; j < i; j++) {
                    cout << nums[j] << endl;
                }
                cout << nums[i] << endl;
            }
            break;
        }
    }

    return 0;
}