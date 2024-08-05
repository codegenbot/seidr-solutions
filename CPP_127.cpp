#include <iostream>
#include <string>
using namespace std;

string intersection(const pair<int, int>& interval1, const pair<int, int>& interval2) {
    int start1 = interval1.first;
    int end1 = interval1.second;
    int start2 = interval2.first;
    int end2 = interval2.second;

    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int length = intersectionEnd - intersectionStart;

    if (length <= 1) {
        return "NO";
    }

    for (int i = 2; i * i <= length; ++i) {
        if (length % i == 0) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}