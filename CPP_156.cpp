#include <sstream>

std::string int_to_mini_romank(int n) {
    if (n == 0)
        return "0";
    std::string roman = "";
    int thousands = n / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";
    n %= 1000;
    int hundreds = n / 100;
    if (hundreds > 0) {
        roman += (hundreds == 1) ? "C" : ((hundreds > 3) ? "D" : std::string(hundreds, 'C'));
        n %= 100;
    }
    int tens = n / 10;
    if (tens > 0) {
        roman += (tens == 1) ? "X" : ((tens > 3) ? "L" : std::string(tens, 'X'));
        n %= 10;
    }
    int ones = n;
    if (ones > 0) {
        roman += (ones == 1) ? "I" : ((ones > 3) ? "V" : std::string(ones, 'I'));
    }
    return roman;
}

int main() {
    std::ostringstream oss(std::locale(), std::ios_base::out);
    int n;
    // Read input from user...
    // Use the function here...
    // Rest of your code...
}