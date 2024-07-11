int sum = 0;
    bool balanced = true;
    
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
        if (q[i] != q[q.size() - 1 - i]) {
            balanced = false;
        }
    }
    
    return balanced && sum <= w;
}