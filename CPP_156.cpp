#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<string> roman[1000] = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX"},
        {"", "XX", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX"},
        {"", "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX"},
        {"", "XL", "XLI", "XLII", "XLIII", "XLIV", "XLV", "XLVI", "XLVII", "XLVIII", "XLIX"},
        {"L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX"},
        {"", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX"},
        {"", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX"},
        {"", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC"},
        {"XC", "XCI", "XCII", "XCIII", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX", "C"}
    };

    string result = "";

    while (number >= 1000) {
        result += "M";
        number -= 1000;
    }

    for (int i = 0; i < roman[number].size(); i++) {
        if (i > 0 && roman[number][i] == roman[number - 1][i]) {
            result += roman[number][i];
        } else {
            result += roman[number][i];
        }
        number -= roman[0][i+1].find(roman[number][i]) + 1;
    }

    return result;
}