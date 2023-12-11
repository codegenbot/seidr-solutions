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
    int left = 0, right = n - 1;
    while (left < right && v[left] != v[right]) {
        int diff = abs(v[left] - v[right]);
        if (diff <= 1) break;
        if (v[left] > v[right]) {
            left++;
        } else {
            right--;
        }
    }
    return {left, right};
}
int main() {
    vector<int> v = {1, 10, 100, 1000, 10000};
    auto result = cutVector(v);
    for (auto x : result) cout << x << " ";
    return 0;
}