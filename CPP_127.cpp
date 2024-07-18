#include <vector>
#include <string>
#include <cmath>

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersectionStart = std::max(start1, start2);
    int intersectionEnd = std::min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int length = intersectionEnd - intersectionStart;

    if (length <= 1) {
        return "NO";
    }

    for (int i = 2; i <= sqrt(length); i++) {
        if (length % i == 0) {
            return "NO";
        }
    }

    return "YES";
}