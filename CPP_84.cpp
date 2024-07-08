#include<stdio.h>
#include<string>
using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        if (N % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        N /= 2;
    }
    int sum = 0;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1')
            sum++;
    }
    return to_string(sum);
}