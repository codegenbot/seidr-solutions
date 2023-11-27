#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int hex_key(string num) {
    unordered_set<char> primeDigits = {'2', '3', '5', '7', 'B', 'D'};
    int count = 0;
    for (char ch : num) {
        if (primeDigits.find(ch) != primeDigits.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    string num;
    cin >> num;
    cout << hex_key(num) << endl;
    return 0;
}