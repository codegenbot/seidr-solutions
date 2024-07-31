```cpp
#include <string>
using namespace std;

int int_to_mini_roman(int n) {
    string roman = "";
    if (n >= 1000) {
        while (n >= 1000) {
            roman += "M";
            n -= 1000;
        }
    }
    if (n >= 900) {
        while (n >= 900) {
            roman += "CM";
            n -= 900;
        }
    }
    if (n >= 500) {
        while (n >= 500) {
            roman += "D";
            n -= 500;
        }
    }
    if (n >= 400) {
        while (n >= 400) {
            roman += "CD";
            n -= 400;
        }
    }
    if (n >= 100) {
        while (n >= 100) {
            roman += (n % 10 == 0 ? "" : roman[roman.size() - 1]);
            roman += "C";
            n -= 100;
        }
    }
    if (n >= 90) {
        while (n >= 90) {
            roman += "XC";
            n -= 90;
        }
    }
    if (n >= 50) {
        while (n >= 50) {
            roman += "L";
            n -= 50;
        }
    }
    if (n >= 40) {
        while (n >= 40) {
            roman += "XL";
            n -= 40;
        }
    }
    if (n >= 10) {
        while (n >= 10) {
            roman += (n % 4 == 0 ? "" : roman[roman.size() - 1]);
            roman += "X";
            n -= 10;
        }
    }
    if (n >= 9) {
        while (n >= 9) {
            roman += "IX";
            n -= 9;
        }
    }
    if (n >= 5) {
        while (n >= 5) {
            roman += "V";
            n -= 5;
        }
    }
    if (n >= 4) {
        while (n >= 4) {
            roman += "IV";
            n -= 4;
        }
    }
    if (n > 0) {
        roman += (n % 1 == 0 ? "" : roman[roman.size() - 1]);
        roman += "I";
        n = 0;
    }

    return roman;
}

int main() {
    cout << int_to_mini_roman(1000) << endl;
    return 0;
}