bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];

    int intersect_start = max(start1, start2);
    int intersect_end = min(end1, end2);

    if (intersect_start > intersect_end) {
        return "NO";
    }

    int length = intersect_end - intersect_start + 1;
    return isPrime(length) ? "YES" : "NO";
}