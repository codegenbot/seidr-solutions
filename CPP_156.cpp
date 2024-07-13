#include <iostream>
#include <string>
using namespace std;

string intToMiniRoman(int n) {
    if (n <= 0)
        return "";
    else if (n >= 1000) {
        return "M" + intToMiniRoman(n - 1000);
    } 
    else if (n >= 900) {
        return "CM" + intToMiniRoman(n - 900);
    }
    else if (n >= 500) {
        return "D" + intToMiniRoman(n - 500);
    }
    else if (n >= 400) {
        return "CD" + intToMiniRoman(n - 400);
    } 
    else if (n >= 100) {
        string roman = "";
        while (n >= 100) {
            roman += "C";
            n -= 100;
        }
        if (n >= 90) {
            return "XC" + intToMiniRoman(n - 90);
        } 
        else if (n >= 50) {
            roman += "L";
            n -= 50;
        } 
        else if (n >= 40) {
            return "XL" + intToMiniRoman(n - 40);
        }
        while (n >= 10) {
            roman += "X";
            n -= 10;
        }
        if (n >= 9) {
            return "IX" + intToMiniRoman(n - 9);
        } 
        else if (n >= 5) {
            roman += "V";
            n -= 5;
        } 
        else if (n >= 4) {
            return "IV" + intToMiniRoman(n - 4);
        }
        while (n > 0) {
            roman += "I";
            n--;
        }
        return roman;
    } else if (n >= 4) {
        return "IV";
    } 
    else if (n >= 1) {
        string roman = "";
        for (int i = 0; i < n; i++) {
            roman += "I";
        }
        return roman;
    }
    return "";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << intToMiniRoman(n) << endl;
    return 0;
}