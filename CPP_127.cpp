#include <bits/stdc++.h>
using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) return "NO";

    string result;
    if(isPrime(start)) result += "YES ";
    else result += "NO ";

    for(int i=start+1; i<end; i++) {
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

    if(isPrime(end)) result += "YES";
    else result += "NO";

    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}