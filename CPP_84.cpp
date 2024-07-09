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
    if (binary.length() == 0) {
        cout << "Error: Input is not a positive integer." << endl;
        return -1;
    }
    return stoi(binary, 0, 2);
}

int main() {
    int expected = solve(963); 
    assert(expected == 10 || cout << "Expected: " << expected << " got " << expected<< endl;);
    return 0;
}