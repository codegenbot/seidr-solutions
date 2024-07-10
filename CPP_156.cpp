namespace {
struct RomanPair {
    int first;
    std::string second;
};
}

std::string int_to_mini_roman(int number) {
    std::vector<RomanPair> romanMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                              {400, "CD"}, {100, "C"}, {90, "XC"},
                              {50, "L"}, {40, "XL"}, {10, "X"},
                              {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string roman = "";
    for (const RomanPair& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The Roman numeral for " << num << " is " << int_to_mini_roman(num) << std::endl;
    return 0;
}