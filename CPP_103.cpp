if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    int avg = sum / (m - n + 1);
    
    string bin_avg = "";
    while (avg > 0) {
        bin_avg = to_string(avg % 2) + bin_avg;
        avg /= 2;
    }
    
    return bin_avg;
}