if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round(double(sum) / (m - n + 1));
    string avg_binary = "";
    while (avg > 0) {
        avg_binary = to_string(avg % 2) + avg_binary;
        avg /= 2;
    }

    return avg_binary;
}