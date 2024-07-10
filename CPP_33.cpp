vector<int> res = l;
    vector<int> modThree;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            modThree.push_back(l[i]);
        }
    }

    sort(modThree.begin(), modThree.end());

    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            res[i] = modThree[j++];
        }
    }

    return res;
}