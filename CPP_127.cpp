int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int start_intersection = max(start1, start2);
    int end_intersection = min(end1, end2);

    int length_intersection = max(0, end_intersection - start_intersection + 1);

    if (length_intersection <= 1) {
        return "NO";
    }

    for (int i = 2; i * i <= length_intersection; i++) {
        if (length_intersection % i == 0) {
            return "NO";
        }
    }

    return "YES";
}