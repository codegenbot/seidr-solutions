int sum = 0;
    for (int val : q) {
        sum += val;
    }
    
    if (sum > w) {
        return false;
    }

    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());
    
    if (q == reversed_q) {
        return true;
    }
    
    return false;
}