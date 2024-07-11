Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) { // check if node is even
            nodes.emplace_back(arr[i], i); // add pair of value and index to the vector
        }
    }
    if (nodes.empty()) return {};
    sort(nodes.begin(), nodes.end()); // sort the nodes by their values
    return {{nodes[0].first, nodes[0].second}}; // return the node with the smallest even value
}