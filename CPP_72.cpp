int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (sum <= w) {
        vector<int> rev_q = q;
        reverse(rev_q.begin(), rev_q.end());

        return q == rev_q;
    } else {
        return false;
    }
}