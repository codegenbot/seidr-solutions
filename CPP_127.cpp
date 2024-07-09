int start1 = max(interval1[0], interval2[0]);
    int end1 = min(interval1[1], interval2[1]);
    int length = end1 - start1 + 1;

    if (length <= 1) return "NO";
    
    for (int i = 2; i * i <= length; ++i) {
        if (length % i == 0) return "NO";
    }
    
    return "YES";
}