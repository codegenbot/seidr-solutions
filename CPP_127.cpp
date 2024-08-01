bool is_prime(int num) {
    // implementation...
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];
    
    int intersection_start = max(start1, start2);
    int intersection_end = min(end1, end2);
    
    if (intersection_start > intersection_end) {
        return "NO";
    }
    
    int intersection_length = intersection_end - intersection_start;
    
    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}