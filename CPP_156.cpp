std::string int_to_mini_roman(int number) {
    std::vector<pair<int, string>> romanNumerals = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"}, {5, "v"},
        {4, "iv"}, {1, "i"}};

    std::string roman = "";
    for (const auto& numeral : romanNumerals) {
        while (number >= numeral.first) {
            roman += numeral.second;
            number -= numeral.first;
        }
        if (number > 0) {
            roman += "i";
            number--;
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}