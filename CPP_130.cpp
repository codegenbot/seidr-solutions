#include<stdio.h>
#include<vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> tribonacci(n + 1);
    if (n >= 0) tribonacci[0] = 1; // tri(0) is not defined in the problem, assuming it to be 1
    if (n >= 1) tribonacci[1] = 3;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            tribonacci[i] = 1 + i / 2;
        } else {
            tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i + 1];
        }
    }
    return tribonacci;
}