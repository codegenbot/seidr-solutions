vector<int> res = l;
    for (size_t i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(res.begin() + i - 2, res.begin() + i + 1);
        }
    }
    return res;
}