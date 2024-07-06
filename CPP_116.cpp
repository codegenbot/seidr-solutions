Here is the completed code:

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> temp;
    for (int i : arr) {
        temp.push_back({__builtin_popcount(i), i});
    }
    sort(temp.begin(), temp.end());
    return vector<int>(temp.begin(), temp.end());
}