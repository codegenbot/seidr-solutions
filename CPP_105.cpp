vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int x : arr) {
        if (x >= 1 && x <= 9) {
            nums.push_back(x);
        }
    }
    
    sort(nums.begin(), nums.end());
    
    vector<string> result;
    for (int x : nums) {
        result.push_back(to_string(x) == "1" ? "One" : to_string(x) == "2" ? "Two" : 
                         to_string(x) == "3" ? "Three" : to_string(x) == "4" ? "Four" :
                         to_string(x) == "5" ? "Five" : to_string(x) == "6" ? "Six" :
                         to_string(x) == "7" ? "Seven" : to_string(x) == "8" ? "Eight" : "Nine");
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}