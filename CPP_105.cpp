bool issame(vector<string> a) {
    if (a.size() == by_length({1, 2, 3}).size()) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != by_length({1, 2, 3})[i]) {
                return false;
            }
        }
    } else {
        return false;
    }
    return true;
}

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
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : nums) {
        result.push_back(numberNames[num]);
    }

    return result;
}