vector<string> by_length(vector<int> arr){
    // Sort the integers between 1 and 9 inclusive
    vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reverse the resulting vector
    reverse(sortedArr.begin(), sortedArr.end());

    // Replace each digit by its corresponding name
    vector<string> result;
    map<int, string> digitNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int num : sortedArr) {
        result.push_back(digitNames[num]);
    }

    return result;
}