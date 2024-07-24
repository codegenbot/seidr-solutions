bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum <= w) {
        vector<int> reversed_q = q;
        reverse(reversed_q.begin(), reversed_q.end());
        
        if (q == reversed_q) {
            return true;
        }
    }
    
    return false;
}