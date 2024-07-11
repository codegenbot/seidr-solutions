int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    vector<int> q_reverse = q;
    reverse(q_reverse.begin(), q_reverse.end());
    
    return sum <= w && q == q_reverse;
}