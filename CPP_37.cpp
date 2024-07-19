vector<float> result;
    vector<float> evenIndices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenIndices.push_back(l[i]);
        }
    }
    sort(evenIndices.begin(), evenIndices.end());
    int evenIndex = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(evenIndices[evenIndex++]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}