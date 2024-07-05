#include<stdio.h>
#include<vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> tribonacci(n + 1);
    if (n >= 0) tribonacci[0] = 1;
    if (n >= 1) tribonacci[1] = 3;
    
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            tribonacci[i] = 1 + i / 2;
        } else {
            tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + (i + 1 <= n ? tribonacci[i + 1] : 0);
        }
    }
    
    return tribonacci;
}