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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
double n, m;
long long cnt = 0;
long long total = 0;

void dfs(int n, int m, long long curP, long long curC) {
    if (curP > curC) {
        cnt++;
    }
    total++;
    if (curP == n && curC == m) {
        return;
    }
    
    if (curP == n) {
        dfs(n, m, curP, curC + 1);
    }
    
    if (curC == m) {
        dfs(n, m, curP + 1, curC);
    }
    
    if (curP < n && curC < m) {
        dfs(n, m, curP + 1, curC);
        dfs(n, m, curP, curC + 1);
    }
}

int main() {
    cin >> n >> m;
    dfs(n, m, 1, 1);
    printf("%.5f", 1.0 * cnt / total);
    return 0;
}
