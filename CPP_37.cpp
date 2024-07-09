vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++) {
        if(i % 2 == 0) {
            vector<float> temp;
            for(float f : l) {
                if(abs(f - l[i]) < 1e-9) {
                    temp.push_back(f);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}
bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}