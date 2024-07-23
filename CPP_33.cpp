for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> subVec;
            for (int j = 3 * (i / 3); j < 3 * (i / 3 + 1); ++j) {
                subVec.push_back(l[j]);
            }
            sort(subVec.begin(), subVec.end());
            for (int j = 0; j < subVec.size(); ++j) {
                l[3 * (i / 3) + j] = subVec[j];
            }
        }
    }
    return l;
}