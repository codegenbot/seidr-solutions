int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());
    
    if (sum <= w && q == reversed_q) {
        return true;
    } else {
        return false;
    }
}