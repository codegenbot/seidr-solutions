int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (q.size() == 1 || (q.size() % 2 == 0 && equal(q.begin(), q.begin() + q.size() / 2, q.rbegin()))) {
        return sum <= w;
    }
    
    return false;
}