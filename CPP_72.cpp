vector<int> sorted_q = q;
    sort(sorted_q.begin(), sorted_q.end());
    
    if (sorted_q != q)
        return false;
    
    int sum = 0;
    for (int num : q)
        sum += num;
    
    return (sum <= w);
}