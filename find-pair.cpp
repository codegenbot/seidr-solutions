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
/*
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
57
input:
2
2500 6352
8852
output:
25006352
input:
2
-14 5
-9
output:
-145
input:
2
40 -19
21
output:
40-19
input:
2
-4 4
0
output:
-44
*/

int find_sum(vector<int> &v, int target) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] + v[j] == target) {
            return v[i] * pow(10, (int)log10(v[j]) + 1) + v[j];
        } else if (v[i] + v[j] < target) {
            i++;
        } else {
            j--;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << find_sum(v, target) << endl;
    return 0;
}
