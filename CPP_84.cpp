#include <iostream>
#include <bitset>

using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - sum);
}

int main() {
    int N = 963;
    cout << solve(N) << endl;
    
    return 0;
}