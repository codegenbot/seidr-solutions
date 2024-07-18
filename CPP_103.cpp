if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int average = round((double)sum / (m - n + 1));
    
    string binary;
    while (average > 0) {
        binary = to_string(average % 2) + binary;
        average /= 2;
    }
    
    return binary;
}