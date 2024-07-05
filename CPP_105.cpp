vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToName = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    
    // Filter elements between 1 and 9 inclusive
    vector<int> filtered;
    for(int num : arr) {
        if(num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }
    
    // Sort and reverse the filtered vector
    sort(filtered.begin(), filtered.end());
    reverse(filtered.begin(), filtered.end());
    
    // Replace each digit by its corresponding name
    for(int num : filtered) {
        result.push_back(numToName[num]);
    }
    
    return result;
}