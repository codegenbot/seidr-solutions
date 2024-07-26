if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = n; i <= m; ++i) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    
    string binary_avg = "";
    
    while (avg > 0) {
        binary_avg = to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}