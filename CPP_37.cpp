```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            for (int k = 0; k < evenVals.size(); k++) {
                bool same = false;
                for (int m = 0; m < l.size(); m++) {
                    if (m % 2 == 0) {
                        vector<float> temp;
                        for (int n = 0; n < l.size(); n++) {
                            if (n % 2 == 0) {
                                temp.push_back(l[n]);
                            }
                        }
                        sort(temp.begin(), temp.end());
                        if (issame(evenVals, temp)) {
                            result.push_back(evenVals[k]);
                            same = true;
                            break;
                        }
                    }
                }
                if (!same) {
                    result.push_back(evenVals[k]);
                }
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}