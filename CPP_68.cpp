Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evens;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evens.emplace_back(arr[i], i);
        }
    }
    if (evens.empty()) return {};
    sort(evens.begin(), evens.end());
    return {evens[0].first, evens[0].second};
}