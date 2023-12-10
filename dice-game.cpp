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

double dice_game(int n, int m) {
    double p = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += 1.0 / (n * m);
            }
        }
    }
    return p;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        cout << dice_game(n, m) << endl;
    }
    return 0;
}