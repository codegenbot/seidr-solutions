#include <bits/stdc++.h>
using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    sort(interval1.begin(), interval1.end());
    sort(interval2.begin(), interval2.end());

    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    string result;
    for(int i=start; i<=end; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) result += "YES ";
        else result += "NO ";
    }

    return result;
}