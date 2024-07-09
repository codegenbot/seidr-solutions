Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    
    if (evenNodes.empty()) {
        return {};
    }
    
    auto minEvenNode = *min_element(evenNodes.begin(), evenNodes.end());
    
    vector<int> result;
    result.push_back(minEvenNode.first);
    result.push_back(minEvenNode.second);
    
    return result;
}