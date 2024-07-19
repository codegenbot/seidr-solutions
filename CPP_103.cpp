int sum = 0;
    int count = 0;
    
    if (n > m) {
        return "-1";
    }
    
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    
    return bitset<32>(avg).to_string().substr(0, log2(avg) + 1);
}