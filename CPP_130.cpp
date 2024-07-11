vector<int> res;
    if (n == 0) {
        res.push_back(0);
        return res;
    }
    
    res.push_back(3);
    if (n == 1) {
        return res;
    }
    
    res.push_back(1);
    if (n == 2) {
        return res;
    }
    
    res.push_back(2);
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            res.push_back(1 + i / 2);
        } else {
            res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
        }
    }
    
    return res;
}