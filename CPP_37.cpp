vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenIndices = vector<float>(l.begin() + i, l.begin() + i + 1);
            sort(evenIndices.begin(), evenIndices.end());
            result.push_back(evenIndices[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}