```c++
vector<int> leaders(vector<int> v) {
    vector<int> res;
    for (int i = v.size() - 1; i >= 0; --i) {
        if (res.empty() || v[i] >= res.back()) {
            res.push_back(v[i]);
        }
    }
    return res;
}