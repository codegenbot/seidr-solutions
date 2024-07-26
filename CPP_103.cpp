if (n > m)
        return "-1";

    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }

    int avg = sum / (m - n + 1);

    string binaryStr = "";
    while (avg > 0) {
        binaryStr = to_string(avg % 2) + binaryStr;
        avg /= 2;
    }

    return binaryStr;
}