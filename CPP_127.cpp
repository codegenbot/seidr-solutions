#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    int intersectionLength = intersectionEnd - intersectionStart + 1;
    
    if (intersectionLength <= 0) {
        return "NO";
    }
    
    if (isPrime(intersectionLength)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    vector<int> interval1 = {1, 2};
    vector<int> interval2 = {2, 3};
    cout << intersection(interval1, interval2) << endl;
    
    interval1 = {-1, 1};
    interval2 = {0, 4};
    cout << intersection(interval1, interval2) << endl;
    
    interval1 = {-3, -1};
    interval2 = {-5, 5};
    cout << intersection(interval1, interval2) << endl;
    
    return 0;
}