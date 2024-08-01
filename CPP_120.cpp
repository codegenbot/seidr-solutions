vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;

    for (int num : arr) {
        if (unique.size() < k) {
            res.push_back(num);
            unique.insert(num);
        } else if (find(unique.begin(), unique.end(), num) == unique.end()) {
            res[0] = num;
            unique.erase(res[0]);
            res.push_back(num);
        }
    }

    return res;
}