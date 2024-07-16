vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(res.begin() + i - 2, res.begin() + i + 1);
        }
    }
    return res;
}