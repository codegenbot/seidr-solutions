```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (abs(a[i] - b[i]) > 1e-6f) return false;
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (float x : l) {
                if (floor(x) == ceil(x)) { // checking if the number is even
                    evenVals.push_back(x);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}