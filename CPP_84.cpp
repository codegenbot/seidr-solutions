#include <stdio.h>
#include <string>
using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    string binary = "";
    if (sum == 0) return "0";
    while (sum > 0) {
        binary = (sum % 2 == 0 ? "0" : "1") + binary;
        sum /= 2;
    }
    return binary;
}