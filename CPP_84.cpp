#include <bits/stdc++.h>

using namespace std;

string solve(int N) {
    string res = "";
    while(N > 0) {
        int remainder = N % 2;
        if(remainder == 1)
            res += "1";
        else
            res += "0";
        N /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}