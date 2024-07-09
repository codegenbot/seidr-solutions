vector<int> sequence{3, 0, 0, 0};
    
    if (n == 0) {
        sequence[0] = 0;
        return sequence;
    }
    
    if (n >= 1)
        sequence[1] = 3;
        
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0)
            sequence[i] = 1 + i / 2;
        else
            sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
    }

    return sequence;
}