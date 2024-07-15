int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];

    int start = max(start1, start2);
    int end = min(end1, end2);

    if (start > end) {
        return "NO";
    }

    if (isPrime(end - start + 1)) {
        return "YES";
    } else {
        return "NO";
    }
}