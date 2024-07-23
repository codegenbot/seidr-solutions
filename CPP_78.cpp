#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

bool isPrimeHexDigit(char hexDigit) {
    string primes = "2357BD";
    return primes.find(hexDigit) != string::npos;
}

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (isPrimeHexDigit(c)) {
            count++;
        }
    }
    return count;
}