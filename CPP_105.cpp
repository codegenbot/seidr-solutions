vector<string> by_length(vector<int> arr) {
    vector<int> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(i);
        }
    }

    sort(numArr.begin(), numArr.end());
    reverse(numArr.begin(), numArr.end());

    vector<string> res;
    map<int, string> numberMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                   {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : numArr) {
        res.push_back(numberMap[i]);
    }

    return res;
}