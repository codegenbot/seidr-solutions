vector<float> oddValues, evenValues;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenValues.push_back(l[i]);
        } else {
            oddValues.push_back(l[i]);
        }
    }
    sort(evenValues.begin(), evenValues.end());
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = evenValues[j++];
        } else {
            l[i] = oddValues[i / 2];
        }
    }
    return l;
}