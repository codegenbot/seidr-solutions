int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    int length = max(0, intersectionEnd - intersectionStart + 1);
    
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