vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToString = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    
    vector<int> validNums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            validNums.push_back(num);
        }
    }
    
    sort(validNums.begin(), validNums.end());
    reverse(validNums.begin(), validNums.end());
    
    for (int num : validNums) {
        result.push_back(numToString[num]);
    }
    
    return result;
}