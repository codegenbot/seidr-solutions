int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum <= w && equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    } else {
        return false;
    }
}