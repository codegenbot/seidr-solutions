vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(numberNames[num]);
        }
    }
    
    sort(result.begin(), result.end());
    
    reverse(result.begin(), result.end());
    
    return result;
}

bool issame(vector<string> a) {
    vector<int> nums = {3, 1, 2};
    vector<string> nums_str = by_length(nums);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != nums_str[i]) return false;
    }
    return true;
}