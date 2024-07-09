#include <iostream>
using namespace std;

string int_to_mini_roman(int n) {
    string roman;
    if(n >= 1000) roman += "M";
    if(n >= 900) roman += "CM" - (n-900);
    if(n >= 500) roman += "D";
    if(n >= 400) roman += "CD" - (n-400);
    if(n >= 100) roman += "C";
    if(n >= 90) roman += "XC" - (n-90);
    if(n >= 50) roman += "L";
    if(n >= 40) roman += "XL" - (n-40);
    if(n >= 10) roman += "X";
    if(n >= 9) roman += "IX" - (n-9);
    if(n >= 5) roman += "V";
    if(n >= 4) roman += "IV" - (n-4);
    if(n >= 1) roman += "I";
    
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}