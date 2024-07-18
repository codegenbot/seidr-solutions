vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> numToString = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    vector<int> sortedArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            sortedArr.push_back(i);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());

    reverse(sortedArr.begin(), sortedArr.end());

    for (int i : sortedArr) {
        result.push_back(numToString[i]);
    }

    return result;
}