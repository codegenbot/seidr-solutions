#include<stdio.h>
#include<vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> trib(n + 1);
    if (n >= 0) trib[0] = 1; // tri(0) is assumed to be 1
    if (n >= 1) trib[1] = 3; // tri(1) = 3

    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            trib[i] = 1 + i / 2;
        } else {
            trib[i] = trib[i - 1] + trib[i - 2] + trib[i + 1];
        }
    }

    return trib;
}