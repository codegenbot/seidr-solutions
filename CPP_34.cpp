```
vector<int> unique(vector<int> l){
    unordered_set<int> seen;
    vector<int> result;
    for (int i : l) {
        if (seen.insert(i).second)
            result.push_back(i);
    }
    return result;
}