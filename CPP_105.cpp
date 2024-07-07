vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            nums.push_back(i);
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    vector<string> result;
    for (int num : nums) {
        string str = to_string(num);
        if (str.length() == 1)
            result.push_back((num == 1 ? "One" : (num == 2 ? "Two" : (num == 3 ? "Three" : (num == 4 ? "Four" : (num == 5 ? "Five" : (num == 6 ? "Six" : (num == 7 ? "Seven" : (num == 8 ? "Eight" : "Nine")))))))));
    }
    return result;
}