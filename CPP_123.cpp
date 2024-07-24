#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> getOddCollatz(int n) {
    vector<int> res; 
    res.push_back(n); 
    while (n > 1) {
        if (n % 2 == 0 && n != 1) {
            n = n / 2;
        } else {
            res.push_back(n);
            n = (n * 3 + 1);
        }
    }
    return res;
}