int sum = 0;
    for (const auto &elem : q) {
        sum += elem;
    }
    
    if (q.size() % 2 != 0) {
        return false;
    }
    
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - i - 1]) {
            return false;
        }
    }
    
    return sum <= w;
}