vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        nodes.emplace_back(arr[i], i);
    }
    
    if(nodes.empty()) return {};
    
    sort(nodes.begin(), nodes.end());
    
    auto it = find_if(nodes.begin(), nodes.end(), [](const pair<int, int>& p) {return p.first % 2 == 0;});
    
    if(it != nodes.end()) {
        return {{it->first, it->second}};
    } else {
        return {};
    }
}