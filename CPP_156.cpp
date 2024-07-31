#include <string>
using namespace std;

int int_to_mini_roman(int n) {
    string roman = "";
    if (n >= 1000) {
        while (n >= 1000) {
            roman.push_back('M');
            n -= 1000;
        }
    }
    if (n >= 900) {
        while (n >= 900) {
            roman += 'C';
            roman.push_back('M');
            n -= 900;
        }
    }
    if (n >= 500) {
        while (n >= 500) {
            roman += 'D';
            n -= 500;
        }
    }
    if (n >= 400) {
        while (n >= 400) {
            roman.push_back('C');
            roman.push_back('D');
            n -= 400;
        }
    }
    if (n >= 100) {
        while (n >= 100) {
            roman += 'C';
            n -= 100;
        }
    }
    if (n >= 90) {
        while (n >= 90) {
            roman.push_back('X');
            roman.push_back('C');
            n -= 90;
        }
    }
    if (n >= 50) {
        while (n >= 50) {
            roman += 'L';
            n -= 50;
        }
    }
    if (n >= 40) {
        while (n >= 40) {
            roman.push_back('X');
            roman.push_back('L');
            n -= 40;
        }
    }
    if (n >= 10) {
        while (n >= 10) {
            roman += 'X';
            n -= 10;
        }
    }
    if (n >= 9) {
        while (n >= 9) {
            roman.push_back('I');
            roman.push_back('X');
            n -= 9;
        }
    }
    if (n >= 5) {
        while (n >= 5) {
            roman += 'V';
            n -= 5;
        }
    }
    if (n >= 4) {
        while (n >= 4) {
            roman.push_back('I');
            roman.push_back('V');
            n -= 4;
        }
    }
    if (n > 0) {
        roman += 'I';
        while (n > 0) {
            roman.push_back('I');
            n--;
        }
    }

    return roman;
}

int main() {
    cout << int_to_mini_roman(1000) << endl;
    return 0;
}