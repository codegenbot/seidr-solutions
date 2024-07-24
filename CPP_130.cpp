#include <stdio.h>
#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> res;
    if(n == 0) return res;
    res.push_back(1);
    if(n > 1) res.push_back(3);
    for(int i = 2; i <= n; ++i) {
        int val;
        if(i % 2 == 0) 
            val = 1 + i / 2;
        else
            val = res[i-1] + res[i-2] + (i+1 > n ? 0 : res[i]);
        res.push_back(val);
    }
    return res;
}