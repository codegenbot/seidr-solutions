int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    vector<int> q_reverse = q;
    reverse(q_reverse.begin(), q_reverse.end());
    
    return (sum <= w && q == q_reverse);
}