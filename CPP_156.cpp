#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int num) {
    vector<string> romans = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string roman = "";
    for (int i = 0; i < values.size(); i++) {
        while (num >= values[i]) {
            num -= values[i];
            roman += romans[i];
        }
    }

    return roman;
}