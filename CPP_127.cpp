#include <string>

string intersection(const vector<int>& interval1, const vector<int>& interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO"s;
    }

    int length = intersectionEnd - intersectionStart;

    if (length <= 1) {
        return "NO"s;
    }

    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            return "NO"s;
        }
    }

    return "YES"s;
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO"s);

    return 0;
}