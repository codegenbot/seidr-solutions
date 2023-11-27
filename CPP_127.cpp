#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    // Check if the intervals intersect
    if (start1 > end2 || start2 > end1) {
        return "NO";
    }
    
    // Calculate the length of the intersection
    int intersectionLength = min(end1, end2) - max(start1, start2) + 1;
    
    // Check if the length is a prime number
    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    // add more test cases if needed
    
    return 0;
}