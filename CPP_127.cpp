string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    
    if (start > end) return "NO";
    
    int length = end - start + 1;
    
    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}