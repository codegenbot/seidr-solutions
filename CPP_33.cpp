for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            vector<int> temp;
            for (int j = i - 2; j <= i; ++j) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int j = i - 2, k = 0; j <= i; ++j, ++k) {
                l[j] = temp[k];
            }
        }
    }
    return l;
}