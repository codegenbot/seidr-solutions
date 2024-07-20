vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    map<int, string> numberMap = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                   {4, "Four"}, {5, "Five"}, {6, "Six"},
                                   {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : nums) {
        if (numberMap.count(num)) {
            result.push_back(numberMap[num]);
        }
    }

    return result;
}