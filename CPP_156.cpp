#include <string>

const std::string roman(int n) {
    if (n >= 1000) return "M" + roman(n - 1000);
    else if (n >= 900) return "CM";
    else if (n >= 500) return "D" + roman(n - 500);
    else if (n >= 400) return "CD";
    else if (n >= 100) return std::to_string(n) == "90" ? "XC" : std::to_string(n) == "50" ? "L" : std::to_string(n) == "40" ? "XL" : n >= 9 ? "IX" : n >= 5 ? "V" : n >= 4 ? "IV" : "I";
    else return "";
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << roman(num) << "\n";
    return 0;
}