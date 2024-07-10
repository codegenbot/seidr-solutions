vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            nums.push_back(i);
        }
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    vector<string> result;
    map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                              {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                              {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : nums) {
        result.push_back(numMap[i]);
    }
    return result;
}