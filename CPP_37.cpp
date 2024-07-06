```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (abs(a[i] - b[i]) > 1e-6f) return false;
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    sort(l.begin(), l.end());
    float prev = l[0];
    int evenIndex = 0;
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] > prev + 0.000001f) {
            result[evenIndex] = prev;
            prev = l[i];
            evenIndex++;
        }
    }
    result[evenIndex] = prev;
    return result;
}