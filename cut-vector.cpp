#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> cutVector(const vector<int>& v) {
    int n = v.size();
    if (n == 0) return {};
    if (n == 1) return {v[0], 0};
    int minDiff = INT_MAX;
    int spot = -1;
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }
    return {v[spot], v[spot+1]};
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto result = cutVector(v);
    cout << "Result: " << result[0] << ", " << result[1] << endl;
    return 0;
}