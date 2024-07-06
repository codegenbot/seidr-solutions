#include<stdio.h>
#include<vector>
using namespace std;

vector<int> tri(int n){
    vector<int> res(1);
    if (n > 0) {
        res.push_back(3);
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                res.push_back(i / 2 + 1);
            } else {
                int lastTwo = res[i-1] - res[i-2];
                int prev = res[i-2] - res[i-3];
                res.push_back(lastTwo + prev + 1);
            }
        }
    }
    return res;
}