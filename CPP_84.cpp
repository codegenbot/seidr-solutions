#include <iostream>
#include <bitset>
#include <string>

using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    return bitset<32>(sum).to_string().substr(32 - sum);
}