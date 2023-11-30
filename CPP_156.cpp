#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

string int_to_mini_romank(int number) {
    vector<string> romanMap = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    vector<int> values = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };

    string result = "";
    int i = 0;
    while (number > 0) {
        while (number >= values[i]) {
            number -= values[i];
            result += romanMap[i];
        }
        i++;
    }

    return result;
}