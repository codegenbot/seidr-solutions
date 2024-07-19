#include <cassert>
#include <string>
using namespace std;

std::vector<pair<int, string>> conversions = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                 {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                 {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

std::string intToMiniRoman(int number) {
    std::string result = "";
    for (const auto& p : conversions) {
        while (number >= p.first) {
            number -= p.first;
            result += p.second;
        }
    }
    return result;
}

int main() {
    assert(intToMiniRoman(1000) == "M");
    return 0;
}