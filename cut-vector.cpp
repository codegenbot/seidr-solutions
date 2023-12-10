```
vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
        }
    }
    
    vector<int> result;
    for (auto& element : left) {
        result.push_back(element);
    }
    for (auto& element : right) {
        result.push_back(element);
    }
    
    return result;
}
```