#include <string>
using namespace std;

string int_to_mini_romank(int n) {
    string roman;
    
    while (n > 0) {
        if (n >= 1000) {
            roman += "m";
            n -= 1000;
        } else if (n >= 900) {
            roman += "cm";
            n -= 900;
        } else if (n >= 500) {
            roman += "d";
            n -= 500;
        } else if (n >= 400) {
            roman += "cd";
            n -= 400;
        } else if (n >= 100) {
            while (n >= 100) {
                roman += "c";
                n -= 100;
            }
        } else if (n >= 90) {
            roman += "cx";
            n -= 90;
        } else if (n >= 50) {
            roman += "l";
            n -= 50;
        } else if (n >= 40) {
            roman += "xl";
            n -= 40;
        } else if (n >= 10) {
            while (n >= 10) {
                roman += "x";
                n -= 10;
            }
        } else if (n >= 9) {
            roman += "ix";
            n -= 9;
        } else if (n >= 5) {
            while (n >= 5) {
                roman += "v";
                n -= 5;
            }
        } else if (n >= 4) {
            roman += "iv";
            n -= 4;
        } else {
            while (n > 0) {
                roman += "i";
                n--;
            }
        }
    }
    
    return roman;
}