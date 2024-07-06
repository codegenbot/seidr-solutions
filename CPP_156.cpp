#include <string>

std::string intToMiniRoman(int number) {
    if (number > 3999) throw std::runtime_error("Input is too large");

    std::string roman;
    while (number >= 1000) { roman += "M"; number -= 1000; }
    while (number >= 900) { roman += "CM"; number -= 900; }
    while (number >= 500) { roman += "D"; number -= 500; }
    while (number >= 400) { roman += "CD"; number -= 400; }
    while (number >= 100) { roman += (number >= 500 && number < 600) ? "DM" : "C"; number -= 100; }
    while (number >= 90) { roman += "XC"; number -= 90; }
    while (number >= 50) { roman += "L"; number -= 50; }
    while (number >= 40) { roman += "XL"; number -= 40; }
    while (number > 0) { roman += (number >= 10 && number < 20) ? (number - 10 + 1)%10 == 4 ? "IV" : "IX" : "X"; number -= 10; }
    while (number > 0) { roman += number % 5 == 1 ? "I" : number % 5 == 2 ? "II" : number % 5 == 3 ? "III" : ""; number %= 5; }
    return roman;
}