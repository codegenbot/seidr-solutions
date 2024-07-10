#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

string intersection(vector<int> interval1, vector<int> interval2);

int main() {
    assert (intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    
    if (start > end) return "NO";
    
    int length = end - start;
    
    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}