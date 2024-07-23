vector<int> leaders(vector<int>& v) {
    int rightmost = v.back();
    vector<int> res({rightmost});
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.insert(res.begin(), rightmost);
        }
    }
    return res;
}