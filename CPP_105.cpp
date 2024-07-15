vector<string> by_length(vector<int> arr){
    vector<string> result;
    
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    
    map<int, string> numToStr = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            result.push_back(numToStr[num]);
        }
    }
    
    return result;
}