#include <string>

int int_to_mini_roman(int n) {
    if (n < 1) return "";
    std::string roman;
    switch (n % 10) {
        case 0:
            roman = int_to_mini_roman(n / 10);
            break;
        case 1:
            roman += (n >= 4 ? "IV" : (n >= 3 ? "III" : (n >= 2 ? "II" : "I")));
            if (n > 3) roman += int_to_mini_roman((n - 3) / 10);
            break;
        case 2:
            roman += "II";
            if (n > 2) roman += int_to_mini_roman((n - 2) / 10);
            break;
        case 3:
            roman += "III";
            if (n > 3) roman += int_to_mini_roman((n - 3) / 10);
            break;
        default:
            roman = "X" + int_to_mini_roman((n - 10) / 10);
    }
    return roman.empty() ? "" : roman;
}