int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectStart = max(start1, start2);
    int intersectEnd = min(end1, end2);
    
    if (intersectStart > intersectEnd) {
        return "NO";
    }
    
    int length = intersectEnd - intersectStart;
    
    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}