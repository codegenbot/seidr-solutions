#include <string>

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "Interval intervals do not intersect";

    int length = end - start + 1;
    bool isPrime = true;

    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "Interval is prime" : "Interval is not prime";
}