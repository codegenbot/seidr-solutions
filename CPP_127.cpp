#include <bits/stdc++.h>
using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    vector<int> numRange(start, end - start + 1);

    for (int i = 0; i < numRange.size(); i++) {
        numRange[i] += start;
    }

    bool isPrime = true;
    for (int num : numRange) {
        if (num <= 1) continue;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (!isPrime) break;
    }

    return isPrime ? "YES" : "NO";
}