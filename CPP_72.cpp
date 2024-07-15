int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (q == vector<int>(q.rbegin(), q.rend()) && sum <= w) {
        return true;
    } else {
        return false;
    }
}