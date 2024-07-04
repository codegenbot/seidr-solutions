#include<iostream>
#include<string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0) return "0";
    
    string result = "";
    string digits = "0123456789ABCDEF";
    
    while (x > 0) {
        result = digits[x % base] + result;
        x /= base;
    }
    
    return result;
}

int main() {
    int number, base;
    cout << "Enter number and base: ";
    cin >> number >> base;
    
    if (base < 2 || base > 16) {
        cout << "Base should be in the range [2, 16]" << endl;
        return 1;
    }
    
    cout << "Converted number: " << change_base(number, base) << endl;
    
    return 0;
}