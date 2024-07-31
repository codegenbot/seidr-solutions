int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum > w) {
        return false;
    }
    
    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());
    
    if (reversed_q == q) {
        return true;
    }
    
    return false;
}