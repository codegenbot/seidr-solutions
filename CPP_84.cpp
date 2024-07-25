#include <iostream>
#include <string>
#include <bitset>

using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - __builtin_clz(sum));
}

int main() {
    int num;
    cin >> num;
    cout << solve(num) << endl;
    return 0;
}