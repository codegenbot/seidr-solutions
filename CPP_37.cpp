bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(abs(a[i]-b[i]) > 1e-6) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evens(l.begin() + i, l.begin() + i + 1);
            sort(evens.begin(), evens.end());
            result.push_back(evens[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}