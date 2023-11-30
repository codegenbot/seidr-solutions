string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int start = max(start1, start2);
    int end = min(end1, end2);
    
    if (start > end) {
        return "NO";
    }
    
    int length = end - start + 1;
    
    if (length <= 1) {
        return "NO";
    }
    
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            return "NO";
        }
    }
    
    return "YES";
}