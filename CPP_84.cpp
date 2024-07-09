#include <bits/stdc++.h>
using namespace std;

long long solve(int n) {
    string binary;
    while(n > 0) {
        if(n % 2 == 0)
            binary.insert(0, "0");
        else
            binary.insert(0, "1");
        n /= 2;
    }
    return (binary.length() == 0 ? -1 : stol(binary, nullptr, 2));
}

int main() {
    assert(solve(963) == std::to_string(10010ll));
    return 0;
}