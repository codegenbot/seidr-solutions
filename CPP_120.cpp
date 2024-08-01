vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;

    for (int num : arr) {
        if (unique.size() < k) {
            unique.insert(num);
            res.push_back(num);
        } else if (unique.find(num) == unique.end()) {
            unique.erase(res.back());
            res.pop_back();
            unique.insert(num);
            res.push_back(num);
        }
    }

    return res;
}