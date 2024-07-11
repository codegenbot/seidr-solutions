using namespace std;

std::string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman_numerals = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                  {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                  {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman = "";
    for (const auto& numeral : roman_numerals) {
        while (number >= numeral.first) {
            roman += numeral.second;
            number -= numeral.first;
        }
        if (number > 0) {
            roman += "I";
            number--;
        }
    }
    return roman;