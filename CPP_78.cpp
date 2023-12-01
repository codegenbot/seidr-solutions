#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int hex_key(string num) {
    int count = 0;
    string primes = "2357BD";
    for (char c : num) {
        if (primes.find(c) != string::npos) {
            count++;
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