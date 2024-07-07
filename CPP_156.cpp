#include <iostream>
#include <string>

std::string int_to_mini_roman(int num) {
    std::string roman = "";
    if (num >= 1000)
        return "M" + int_to_mini_roman(num - 1000);
    else if (num >= 900)
        return "CM" + int_to_mini_roman(num - 900);
    else if (num >= 500)
        return "D" + int_to_mini_roman(num - 500);
    else if (num >= 400)
        return "CD" + int_to_mini_roman(num - 400);
    else if (num >= 100)
        return toRoman(num % 100) + int_to_mini_roman(num / 100);
    else if (num >= 90)
        return "XC" + int_to_mini_roman(num - 90);
    else if (num >= 50)
        return "L" + int_to_mini_roman(num - 50);
    else if (num >= 40)
        return "XL" + int_to_mini_roman(num - 40);
    else if (num >= 10)
        return toRoman(num % 10) + int_to_mini_roman(num / 10);
    else if (num >= 9)
        return "IX" + int_to_mini_roman(num - 9);
    else if (num >= 5)
        return "V" + int_to_mini_roman(num - 5);
    else if (num >= 4)
        return "IV" + int_to_mini_roman(num - 4);
    else
        return toRoman(num);

}

std::string toRoman(int num) {
    switch (num) {
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
        default:
            if (num >= 10) {
                if (num % 10 == 0)
                    return std::string(num / 10, 'X');
                else
                    return toRoman(num / 10) + "X" + toRoman(num % 10);
            } else
                return "";
    }
}

int main() {
    int num; // input
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Mini Roman representation is: " << int_to_mini_roman(num) << "\n";
    return 0;
}