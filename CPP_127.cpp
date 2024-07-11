string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (end < start) return "NO";

    int length = end - start + 1;

    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) return "NO";
    }

    return "YES";
}