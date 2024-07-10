Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    
    if (evenNodes.empty()) {
        return {};
    }
    
    int minIndex = evenNodes[0].second;
    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < evenNodes[minIndex].first) {
            minIndex = i;
        } else if (evenNodes[i].first == evenNodes[minIndex].first) {
            minIndex = i;
        }
    }
    
    return {{evenNodes[minIndex].first, evenNodes[minIndex].second}};
}