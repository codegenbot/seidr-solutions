vector<int> r;
    if(n == 0) return r;
    r.push_back(3);
    if(n == 1) return r;
    r.push_back(1);
    for(int i = 2; i <= n; ++i) {
        if(i % 2 == 0) {
            r.push_back(1 + i / 2);
        } else {
            r.push_back(r[i-1] + r[i-2] + r[i+1]);
        }
    }
    return r;