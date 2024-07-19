int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum <= w) {
        vector<int> reverse_q = q;
        reverse(reverse_q.begin(), reverse_q.end());
        if (q == reverse_q) {
            return true;
        }
    }
    
    return false;
}