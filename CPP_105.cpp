vector<string> by_length(vector<int> arr) {
    vector<int> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    vector<string> output;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                     {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : result) {
        output.push_back(numberNames[i]);
    }
    return output;
}