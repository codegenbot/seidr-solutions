#include <string>

std::string int_to_mini_roman(int num) {
    if (num >= 4000) return "M" + toMiniRomanHelper(num - 1000);
    else if (num >= 900) return "CM" + toMiniRomanHelper(num - 800);
    else if (num == 500) return "D";
    else if (num >= 400) return "CD" + toMiniRomanHelper(num - 300);
    else if (num >= 100) {
        std::string roman = "";
        while (num >= 90) {
            roman += "XC";
            num -= 90;
        }
        if (num >= 50) roman += "L" + toMiniRomanHelper(num - 50);
        else roman = "L" + toMiniRomanHelper(num);
        return roman;
    }
    else if (num == 40) return "XL";
    else if (num >= 10) {
        std::string roman = "";
        while (num >= 9) {
            roman += "IX";
            num -= 9;
        }
        if (num >= 5) roman += "V" + toMiniRomanHelper(num - 5);
        else roman = "V" + toMiniRomanHelper(num);
        return roman;
    }
    else if (num == 4) return "IV";
    else return "I" + toMiniRomanHelper(num - 1);
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    // rest of your code...
}