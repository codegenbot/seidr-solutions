vector<int> res;
    if(n == 0) return res;
    res.push_back(3);
    if(n == 1) return res;
    res.push_back(1);
    if(n == 2) return res;
    res.push_back(2);
    int a = 3, b = 1, c = 2;
    for(int i = 3; i <= n; ++i){
        int next;
        if(i % 2 == 0){
            next = 1 + i / 2;
        } else {
            next = a + b + c;
        }
        res.push_back(next);
        a = b;
        b = c;
        c = next;
    }
    return res;
}