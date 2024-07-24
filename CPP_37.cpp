vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenIndices(l.begin() + i, l.begin() + i + 1);
            sort(evenIndices.begin(), evenIndices.end());
            result[i] = evenIndices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}