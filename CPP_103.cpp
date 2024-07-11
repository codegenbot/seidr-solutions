if (n > m) {
        return "-1";
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round((double)sum / (m - n + 1));
    string binaryResult = "";
    while (avg > 0) {
        binaryResult = to_string(avg % 2) + binaryResult;
        avg /= 2;
    }
    return binaryResult;
}