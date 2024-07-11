int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (q.size() % 2 != 0) {
        return false;
    }
    
    if (sum <= w) {
        vector<int> reversed_q = q;
        reverse(reversed_q.begin(), reversed_q.end());
        
        return q == reversed_q;
    }
    
    return false;
}