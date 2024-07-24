#include <iostream>

using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end)
        return "NO";

    int length = end - start + 1;

    bool isPrime = true;
    for (int i = 2; i * i <= length; i++) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime ? "YES" : "NO";
}

int main() {
    // Test cases
    vector<int> interval1, interval2;

    // Example test case 1
    interval1 = {1, 3};
    interval2 = {2, 4};
    cout << intersection(interval1, interval2) << endl;  // Should print "NO"

    // Example test case 2
    interval1 = {-1, 1};
    interval2 = {0, 4};
    cout << intersection(interval1, interval2) << endl;  // Should print "NO"

    // Example test case 3
    interval1 = {-3, -1};
    interval2 = {-5, 5};
    cout << intersection(interval1, interval2) << endl;  // Should print "YES"
    
    return 0;
}