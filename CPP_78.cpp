#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D') {
            int decimal_value = (c >= 'A' && c <= 'F') ? c - 'A' + 10 : c - '0';
            if (isPrime(decimal_value)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string num;
    cin >> num;
    int result = hex_key(num);
    cout << result << endl;
    return 0;
}