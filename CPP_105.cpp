vector<string> by_length(vector<int> arr) {
    vector<int> numArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numArr.push_back(num);
        }
    }

    sort(numArr.begin(), numArr.end());
    reverse(numArr.begin(), numArr.end());

    vector<string> result;
    map<int, string> numName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                 {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int num : numArr) {
        result.push_back(numName[num]);
    }

    return result;
}