#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::max and std::min

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
    // Example usage and self-test
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    assert(intersection({1, 4}, {2, 5}) == "YES"); // Example case where length is 3 (prime)
    // Add more test cases as required
    cout << "All test cases passed!" << endl;
    return 0;
}