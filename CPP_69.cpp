int search(vector<int> lst) {
    map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    vector<int> maxVals;
    for (auto p : countMap) {
        if (p.second >= std::count(lst.begin(), lst.end(), p.first)) {
            maxVals.push_back(p.first);
        }
    }
    
    return maxVals.empty() ? -1 : *max_element(maxVals.begin(), maxVals.end());
}