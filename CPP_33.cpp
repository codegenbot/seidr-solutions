vector<int> res = l;
    for (int i = 0; i < l.size(); i += 3) {
        sort(res.begin() + i, res.begin() + i + 3);
    }
    return res;
}