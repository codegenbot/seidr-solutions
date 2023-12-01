string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int start = max(start1, start2);
    int end = min(end1, end2);
    
    if (start <= end) {
        int length = end - start + 1;
        
        if (isPrime(length)) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        return "NO";
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}