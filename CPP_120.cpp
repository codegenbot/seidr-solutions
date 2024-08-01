vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;

    for (int num : arr) {
        if (unique.find(num) == unique.end()) {
            unique.insert(num);
            if (res.size() < k)
                res.push_back(num);
        }
        if (res.size() == k)
            break;
    }

    return res;
}