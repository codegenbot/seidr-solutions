#include <bitset>
#include <cassert>

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - __builtin_clz(sum));
}

int main() {
    string result = solve(963);
    assert(result == "10010");
    return 0;
}