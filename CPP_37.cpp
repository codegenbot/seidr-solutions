```cpp
vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            vector<float> oddVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 != 0) {
                    oddVals.push_back(l[j]);
                }
            }
            sort(oddVals.begin(), oddVals.end());
            result[i] = oddVals[0];
        }
    }
    return result;
}