int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersection_length = max(0, min(end1, end2) - max(start1, start2) + 1);

    if (is_prime(intersection_length)) {
        return "YES";
    } else {
        return "NO";
    }
}