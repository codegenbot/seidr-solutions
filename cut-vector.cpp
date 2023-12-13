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

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> result1, result2;
    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            result1.clear();
            result2.clear();
            for (int j = 0; j <= i; j++) {
                result1.push_back(v[j]);
            }
            for (int j = i + 1; j < n; j++) {
                result2.push_back(v[j]);
            }
        }
    }
    return {result1, result2};
}

int main() {
    vector<int> v = {1, 10, 100, 1000, 10000};
    auto result = cutVector(v);
    cout << "Result: " << endl;
    for (auto& subvector : result) {
        for (int i : subvector) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}