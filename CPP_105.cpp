vector<string> by_length(vector<int> arr) {
    map<int, string> digitName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sorting the integers between 1 and 9
    vector<int> sortedArr;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    // Reversing the sorted array
    reverse(sortedArr.begin(), sortedArr.end());

    // Converting integers to their corresponding names
    vector<string> result;
    for (int i = 0; i < sortedArr.size(); i++) {
        result.push_back(digitName[sortedArr[i]]);
    }

    return result;
}