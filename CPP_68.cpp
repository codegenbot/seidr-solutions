Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.push_back({arr[i], i});
        }
    }
    if (nodes.empty()) {
        return {};
    }
    auto smallest = min_element(nodes.begin(), nodes.end());
    return {{smallest->first, smallest->second}};
}