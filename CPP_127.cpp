string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (end < start)
        return "NO";

    int len = end - start + 1;
    bool isPrime = true;

    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "YES" : "NO";
}