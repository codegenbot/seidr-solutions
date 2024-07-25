int sum = 0;
    for (int val : q) {
        sum += val;
    }
    
    vector<int> reverse_q = q;
    reverse(reverse_q.begin(), reverse_q.end());
    
    return (sum <= w && q == reverse_q);
}