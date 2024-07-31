int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());
    
    return sum <= w && q == reversed_q;
}