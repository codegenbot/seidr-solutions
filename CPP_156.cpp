#include <vector>
#include <string>

struct Roman {
    std::string value;
};

std::string int_to_roman(int number) {
    if (number >= 4000) {
        return "MMMM";
    } else if (number >= 3000) {
        return "MMM";
    } else if (number >= 2000) {
        return "MM";
    } else if (number >= 1000) {
        return "M";
    } else if (number >= 900) {
        return "CM";
    } else if (number >= 500) {
        return "D";
    } else if (number >= 400) {
        return "CD";
    } else if (number >= 100) {
        if (number % 100 == 0) {
            return std::to_string(number / 100) + "C";
        } else {
            return std::to_string(number / 100) + "C" + int_to_roman(number % 100);
        }
    } else if (number >= 90) {
        return "XC";
    } else if (number >= 50) {
        if (number % 50 == 0) {
            return std::to_string(number / 50) + "L";
        } else {
            return std::to_string(number / 50) + "L" + int_to_roman(number % 50);
        }
    } else if (number >= 40) {
        return "XL";
    } else if (number >= 10) {
        if (number % 10 == 0) {
            return std::to_string(number / 10) + "X";
        } else {
            return std::to_string(number / 10) + "X" + int_to_roman(number % 10);
        }
    } else if (number >= 9) {
        return "IX";
    } else if (number >= 5) {
        if (number % 5 == 0) {
            return std::to_string(number / 5) + "V";
        } else {
            return std::to_string(number / 5) + "V" + int_to_roman(number % 5);
        }
    } else if (number >= 4) {
        return "IV";
    } else if (number >= 1) {
        return std::to_string(number) + "I";
    } else {
        return "";
    }
}

int main() {
    assert(int_to_roman(1000) == "M");
    return 0;
}