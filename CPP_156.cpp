#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < 13; ++i)
        while (number >= val[i]) {
            number -= val[i];
            result += roman[i];
        }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}