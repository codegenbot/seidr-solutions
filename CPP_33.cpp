vector<int> idx;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            idx.push_back(i);
        }
    }
    sort(idx.begin(), idx.end(), [&](int a, int b) { return l[a] < l[b]; });

    for (int i = 0; i < idx.size(); i++) {
        l[idx[i]] = l[idx.size() - 1 - i];
    }

    return l;
}