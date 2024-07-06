Here is the completed code:

vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int x : arr) {
        if (x >= 1 && x <= 9)
            temp.push_back(x);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    map<int, string> numName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int x : temp) {
        result.push_back(numName[x]);
    }
    return result;
}