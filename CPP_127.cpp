#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];

    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);

    if (intersectionStart > intersectionEnd) {
        return "NO";
    }

    int length = intersectionEnd - intersectionStart;

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

int main() {
    // Add test cases here
    // cout << intersection({1, 5}, {3, 7}) << endl;
    // cout << intersection({4, 8}, {10, 15}) << endl;
    // cout << intersection({1, 3}, {4, 6}) << endl;
    
    return 0;
}