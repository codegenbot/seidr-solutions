int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    bool is_balanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            is_balanced = false;
            break;
        }
    }
    
    return is_balanced && sum <= w;
}