#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    string binary = "";
    while(n > 0) {
        if(n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    return binary.length() ? stoi(binary, 0, 2) : 0;
}

int main() {
    cout << (solve(963) == std::stoi("10010", 0, 2) ? "True" : "False");
    return 0;
}