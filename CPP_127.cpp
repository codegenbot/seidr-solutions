int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersection_start = max(start1, start2);
    int intersection_end = min(end1, end2);

    if (intersection_start > intersection_end) {
        return "NO";
    }

    int length = intersection_end - intersection_start;

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