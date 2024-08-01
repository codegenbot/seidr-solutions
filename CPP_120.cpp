vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;

    for(int i : arr) {
        if(unique.find(i) == unique.end()) {
            res.push_back(i);
            if(res.size() == k) break;
            unique.insert(i);
        }
    }

    return res;
}