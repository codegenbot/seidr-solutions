#include <string>
using namespace std;
string int_to_mini_roman(int number) {
    string roman;
    if (number >= 1000)
        roman += "M" + int_to_mini_roman(number - 1000);
    else if (number >= 900)
        roman += "CM" + int_to_mini_roman(number - 900);
    else if (number >= 500)
        roman += "D" + int_to_mini_roman(number - 500);
    else if (number >= 400)
        roman += "CD" + int_to_mini_roman(number - 400);
    else if (number >= 100)
        roman += (number / 100) == 1 ? "C" : string((number / 100), 'C') + (number % 100 > 0 ? "D" : "") + int_to_mini_roman(number % 100);
    else if (number >= 90)
        roman += "XC" + int_to_mini_roman(number - 90);
    else if (number >= 50)
        roman += "L" + int_to_mini_roman(number - 50);
    else if (number >= 40)
        roman += "XL" + int_to_mini_roman(number - 40);
    else if (number >= 10)
        roman += (number / 10) == 1 ? "X" : string((number / 10), 'X') + (number % 10 > 0 ? "V" : "") + int_to_mini_roman(number % 10);
    else if (number >= 9)
        roman += "IX" + int_to_mini_roman(number - 9);
    else if (number >= 5)
        roman += "V" + int_to-mini_roman(number - 5);
    else if (number >= 4)
        roman += "IV" + int_to_mini_roman(number - 4);
    else
        roman += (number == 1 ? "I" : string(number, 'I')) + ((number > 3) ? "V" : "");
    return roman;
}