vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int x : arr) {
        if (x >= 1 && x <= 9)
            nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    vector<string> result;
    for (int x : nums)
        result.push_back({"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}[x-1]);
    return result;
}