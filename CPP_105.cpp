vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }
    
    sort(nums.begin(), nums.end());
    
    vector<string> result;
    for (int num : nums) {
        string str = to_string(num);
        result.push_back(str == "1" ? "One" : str == "2" ? "Two" : str == "3" ? "Three" : 
                         str == "4" ? "Four" : str == "5" ? "Five" : str == "6" ? "Six" : 
                         str == "7" ? "Seven" : str == "8" ? "Eight" : "Nine");
    }
    
    return result;
}