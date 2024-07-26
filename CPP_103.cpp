if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int average = round((double)sum / (m - n + 1));
    
    string binary_avg = "";
    while (average > 0) {
        binary_avg = to_string(average % 2) + binary_avg;
        average /= 2;
    }
    
    return binary_avg;
}