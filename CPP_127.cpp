string intersection(vector<int> interval1, vector<int> interval2);

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    if (intersectionStart > intersectionEnd) {
        return "NO";
    }
    
    int intersectionLength = intersectionEnd - intersectionStart;
    
    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}