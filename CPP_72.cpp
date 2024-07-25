int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (q.size() == 1 || equal(q.begin(), q.end(), q.rbegin(), q.rend())) {
        if (sum <= w) {
            return true;
        }
    }
    
    return false;
}