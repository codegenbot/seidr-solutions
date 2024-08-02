#include <stdio.h>
#include <string>
using namespace std;

string solve(int N) {
    string res = "";
    while (N > 0) {
        if (N % 2 == 1)
            res += "1";
        else
            res += "0";
        N /= 2;
    }
    return res;
}