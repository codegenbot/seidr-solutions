if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    string binaryAvg = "";
    while (avg > 0) {
        binaryAvg = to_string(avg % 2) + binaryAvg;
        avg /= 2;
    }
    
    return binaryAvg;
}