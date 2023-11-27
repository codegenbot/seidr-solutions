#include <iostream>
#include <vector>

using namespace std;

vector<int> tri(int n) {
    vector<int> result;
    result.push_back(3); // First element is always 3
    if (n == 0) {
        return result;
    }
    result.push_back(1); // Second element is always 1
    if (n == 1) {
        return result;
    }
    result.push_back(2); // Third element is always 2
    if (n == 2) {
        return result;
    }
    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }
    return result;
}