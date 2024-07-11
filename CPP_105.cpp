vector<string> by_length(vector<int> arr) {
    vector<int> v;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<string> result;
    map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : v) {
        result.push_back(m[i]);
    }
    return result;
}