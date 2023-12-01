vector<string> by_length(vector<int> arr) {
    vector<string> result;
    vector<int> temp;
    
    // Sort the integers that are between 1 and 9 inclusive
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            temp.push_back(arr[i]);
        }
    }
    sort(temp.begin(), temp.end());
    
    // Reverse the resulting vector
    reverse(temp.begin(), temp.end());
    
    // Replace each digit by its corresponding name from "One" to "Nine"
    map<int, string> digitNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i = 0; i < temp.size(); i++) {
        result.push_back(digitNames[temp[i]]);
    }
    
    return result;
}