std::string intToMiniRoman(int num) {
    vector<pair<int, string>> romanValues = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                              {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                              {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string result = "";
    for (const auto& p : romanValues) {
        while (num >= p.first) {
            num -= p.first;
            result += p.second;
        }
    }
    return result;
}

int main() {
    assert(intToMiniRoman(1000) == "M");
    return 0;
}