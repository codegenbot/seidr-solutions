Here is the completed code:

```cpp
#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<string> romanNumerals = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                                    "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX",
                                    "XX", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX",
                                    "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX",
                                    "XL", "XLI", "XLII", "XLIII", "XLIV", "XLV", "XLVI", "XLVII", "XLVIII", "XLIX",
                                    "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX",
                                    "LX", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX",
                                    "LXX", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX",
                                    "LXXX", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX",
                                    "XC", "XCI", "XCII", "XCIII", "XCIV", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX",
                                    "C"};

    string roman = "";
    int i = 0;
    while (number > 0) {
        if (number >= 1000) {
            number -= 1000;
            roman += "M";
        } else if (number >= 900) {
            number -= 900;
            roman += "CM";
        } else if (number >= 500) {
            number -= 500;
            roman += "D";
        } else if (number >= 400) {
            number -= 400;
            roman += "CD";
        } else if (number >= 100) {
            while (number >= 100) {
                number -= 100;
                roman += "C";
            }
        } else if (number >= 90) {
            number -= 90;
            roman += "XC";
        } else if (number >= 50) {
            while (number >= 50) {
                number -= 50;
                roman += "L";
            }
        } else if (number >= 40) {
            number -= 40;
            roman += "XL";
        } else if (number >= 10) {
            while (number >= 10) {
                number -= 10;
                roman += "X";
            }
        } else if (number >= 9) {
            number -= 9;
            roman += "IX";
        } else if (number >= 5) {
            while (number >= 5) {
                number -= 5;
                roman += "V";
            }
        } else if (number >= 4) {
            number -= 4;
            roman += "IV";
        } else {
            number -= 1;
            roman += "I";
        }
    }

    return roman;
}