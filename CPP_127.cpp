#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    
    if (start > end) {
        return "NO";
    }
    
    int length = end - start + 1;
    
    if (isPrime(length)) {
        return "YES";
    }
    
    return "NO";
}

vector<int> solve() {
    vector<int> interval1 = {1, 2};
    vector<int> interval2 = {2, 3};
    vector<int> output;
    
    output.push_back(intersection(interval1, interval2) == "YES");
    
    interval1 = {-1, 1};
    interval2 = {0, 4};
    
    output.push_back(intersection(interval1, interval2) == "YES");
    
    interval1 = {-3, -1};
    interval2 = {-5, 5};
    
    output.push_back(intersection(interval1, interval2) == "YES");
    
    return output;
}