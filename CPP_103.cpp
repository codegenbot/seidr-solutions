if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    string result = "";
    while (avg > 0) {
        result = to_string(avg % 2) + result;
        avg /= 2;
    }
    
    return result;
}