int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (sum > w) {
        return false;
    }
    
    vector<int> reverse_q = q;
    reverse(reverse_q.begin(), reverse_q.end());
    
    return q == reverse_q;
}