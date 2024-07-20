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
    
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    if (intersectionStart > intersectionEnd) {
        return "NO";
    }
    
    int intersectionLength = intersectionEnd - intersectionStart + 1;
    
    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}