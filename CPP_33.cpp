vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int j = i, k = 0; j < l.size() && j % 3 == 0; j++, k++) {
                res[j] = temp[k];
            }
        }
    }
    return res;
}