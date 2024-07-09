vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenIndices = {l[i]};
            for (int j = 1; j < l.size(); j += 2) {
                if (j <= i) continue;
                if (!std::binary_search(evenIndices.begin(), evenIndices.end(), l[j])) {
                    evenIndices.push_back(l[j]);
                }
            }
            sort(evenIndices.begin(), evenIndices.end());
            result.insert(result.begin() + i, evenIndices[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}