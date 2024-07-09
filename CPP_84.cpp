#include <iostream>
#include <cassert>

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
    return binary.length() ? stoi(binary) : 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string binary = "";
    while(num > 0) {
        if(num % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        num /= 2;
    }
    cout << "The binary representation of the number is: " << binary << endl;
    return 0;
}