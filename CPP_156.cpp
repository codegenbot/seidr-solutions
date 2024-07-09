```cpp
#include <string>

int int_to_mini_roman(int n) {
    if (n >= 1000) {
        return 'M';
    } else if (n >= 900) {
        return 'CM' + int_to_mini_roman(n - 900);
    } else if (n >= 500) {
        return 'D' + int_to_mini_roman(n - 500);
    } else if (n >= 400) {
        return 'CD' + int_to_mini_roman(n - 400);
    } else if (n >= 100) {
        return int_to_cii(n % 100);
    } else if (n >= 90) {
        return 'XC' + int_to_mini_roman(n - 90);
    } else if (n >= 50) {
        return 'L' + int_to_mini_roman(n - 50);
    } else if (n >= 40) {
        return 'XL' + int_to_mini_roman(n - 40);
    } else if (n > 0) {
        return int_to_vi(n);
    }
}

std::string int_to_cii(int n) {
    if (n == 9) {
        return "IX";
    } else if (n == 8) {
        return "VIII";
    } else if (n == 7) {
        return "VII";
    } else if (n == 6) {
        return "VI";
    } else if (n == 5) {
        return "V";
    } else if (n == 4) {
        return "IV";
    } else if (n == 3) {
        return "III";
    } else if (n == 2) {
        return "II";
    } else if (n == 1) {
        return "I";
    } else {
        if (n < 10) {
            switch (n) {
                case 0:
                    return "";
                case 1:
                    return "I";
                case 2:
                    return "II";
                case 3:
                    return "III";
                case 4:
                    return "IV";
                case 5:
                    return "V";
                case 6:
                    return "VI";
                case 7:
                    return "VII";
                case 8:
                    return "VIII";
                case 9:
                    return "IX";
            }
        } else if (n < 100) {
            switch (n % 10) {
                case 0:
                    return std::to_string(n / 10) + "X";
                case 1:
                    return std::to_string(n / 10) + "XI";
                case 2:
                    return std::to_string(n / 10) + "XII";
                case 3:
                    return std::to_string(n / 10) + "XIII";
                case 4:
                    return std::to_string(n / 10) + "XIV";
                case 5:
                    return std::to_string(n / 10) + "XV";
                case 6:
                    return std::to_string(n / 10) + "XVI";
                case 7:
                    return std::to_string(n / 10) + "XVII";
                case 8:
                    return std::to_string(n / 10) + "XVIII";
                case 9:
                    return std::to_string(n / 10) + "XIX";
            }
        } else {
            return "Error";
        }
    }
}

std::string int_to_vi(int n) {
    if (n >= 3) {
        return "III" + int_to_vi(n - 3);
    } else if (n == 2) {
        return "II";
    } else if (n == 1) {
        return "I";
    }
}