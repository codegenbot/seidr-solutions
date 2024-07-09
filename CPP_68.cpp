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

    pair<int, int> smallest = nodes[0];
    for (int i = 1; i < nodes.size(); i++) {
        if (nodes[i].first < smallest.first) {
            smallest = nodes[i];
        } else if (nodes[i].first == smallest.first) {
            smallest = nodes[i];
            if (nodes[i].second < smallest.second) {
                smallest = nodes[i];
            }
        }
    }

    return {smallest.first, smallest.second};
}