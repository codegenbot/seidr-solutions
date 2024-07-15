int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (q.size() < 2)
        return false;
    
    if (sum <= w) {
        for (int i = 0; i < q.size(); i++) {
            if (q[i] != q[q.size() - i - 1])
                return false;
        }
        return true;
    } else {
        return false;
    }
}