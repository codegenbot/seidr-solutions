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
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
pair<int, int> findPair(vector<int>& input, int target) {
    unordered_map<int, int> map;
    int n = input.size();
    for (int i = 0; i < n; i++) {
        map[input[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        int diff = target - input[i];
        if (map.count(diff) && map[diff] != i) {
            return make_pair(input[i], diff);
        }
    }
    return make_pair(-1, -1);
}

int main() {
    vector<int> input = {5, 7};
    int target = 12;
    pair<int, int> ans = findPair(input, target);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
