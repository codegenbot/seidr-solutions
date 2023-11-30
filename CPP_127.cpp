string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int start = max(start1, start2);
    int end = min(end1, end2);

    if (start > end) {
        return "NO";
    }

    int length = end - start;
    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}