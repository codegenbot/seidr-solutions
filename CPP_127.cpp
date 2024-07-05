#include <cmath>
#include <vector>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0], end1 = interval1[1];
    int start2 = interval2[0], end2 = interval2[1];

    int startIntersection = max(start1, start2);
    int endIntersection = min(end1, end2);

    if (startIntersection > endIntersection) return "NO";

    int length = endIntersection - startIntersection + 1;
    return isPrime(length) ? "YES" : "NO";
}