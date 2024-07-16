vector<int> result;
    result.push_back(3);
    if (n == 0) {
        return result;
    }
    result.push_back(1);
    if (n == 1) {
        return result;
    }
    result.push_back(2);
    if (n == 2) {
        return result;
    }
    int prev = 1, curr = 2, next = 0;
    
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            next = 1 + i / 2;
        } else {
            next = prev + curr + 1;
        }
        result.push_back(next);
        prev = curr;
        curr = next;
    }
    
    return result;
}