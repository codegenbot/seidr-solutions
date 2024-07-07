vector<string> by_length(vector<int> arr) {
    vector<int> tempArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            tempArr.push_back(i);
    }
    sort(tempArr.begin(), tempArr.end());
    reverse(tempArr.begin(), tempArr.end());
    vector<string> result;
    map<int, string> numNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                 {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                 {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : tempArr)
        result.push_back(numNames[i]);
    return result;
}