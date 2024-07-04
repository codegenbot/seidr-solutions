#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int hex_key(const string& num) {
    unordered_set<char> prime_hex_digits = {'2', '3', '5', '7', 'B', 'D'};
    int count = 0;
    for (char c : num) {
        if (prime_hex_digits.count(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a hex string: ";
    cin >> input;
    cout << "Count of prime hex digits: " << hex_key(input) << endl;
    return 0;
}