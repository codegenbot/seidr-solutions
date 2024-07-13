int main() {
    vector<int> nums;
    int num;
   
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    int curr_sum = 0;
    int cut_index = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum >= half_sum) {
            cut_index = i;
            break;
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());

    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }

    return 0;
}