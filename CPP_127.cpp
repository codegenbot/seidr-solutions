std::string intersection(const std::pair<int, int>& interval1, const std::pair<int, int>& interval2) {
    int start1 = interval1.first;
    int end1 = interval1.second;
    int start2 = interval2.first;
    int end2 = interval2.second;
    
    if (start1 > end1 || start2 > end2) {
        return "INVALID INTERVAL";
    }
    
    int intersection_start = std::max(start1, start2);
    int intersection_end = std::min(end1, end2);
    
    if (intersection_start > intersection_end) {
        return "NO";
    }
    
    int intersection_length = intersection_end - intersection_start + 1;
    
    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}