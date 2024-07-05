#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
    
    int intersect_start = max(start1, start2);
    int intersect_end = min(end1, end2);
    
    if (intersect_start > intersect_end) return "NO";
    
    int length = intersect_end - intersect_start + 1;
    
    return isPrime(length) ? "YES" : "NO";
}

int main() {
    cout << intersection({1, 10}, {5, 15}) << endl;
    cout << intersection({1, 10}, {3, 7}) << endl;
    cout << intersection({1, 10}, {10, 10}) << endl;
    cout << intersection({11, 30}, {25, 50}) << endl;
    cout << intersection({2, 5}, {3, 4}) << endl;
    return 0;
}