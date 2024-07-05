#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = min(interval1[0], interval1[1]);
    int end1 = max(interval1[0], interval1[1]);
    int start2 = min(interval2[0], interval2[1]);
    int end2 = max(interval2[0], interval2[1]);
    
    int startIntersection = max(start1, start2);
    int endIntersection = min(end1, end2);
    
    if (startIntersection > endIntersection) return "NO";
    
    int intersectionLength = endIntersection - startIntersection + 1;
    
    return isPrime(intersectionLength) ? "YES" : "NO";
}