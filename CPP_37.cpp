vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenValues(l.begin() + i, l.begin() + i + 1);
            sort(evenValues.begin(), evenValues.end());
            result.push_back(evenValues[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}