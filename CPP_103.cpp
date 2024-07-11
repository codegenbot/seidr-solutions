if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round(sum / (m - n + 1));
    
    return bitset<sizeof(int)*8>(avg).to_string().substr(1);
}