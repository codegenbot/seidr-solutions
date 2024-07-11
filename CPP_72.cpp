int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (q.size() % 2 != 0) {
        return false;
    }
    
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    
    if (sum <= w) {
        return true;
    } else {
        return false;
    }
}