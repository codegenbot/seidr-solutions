#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

string intToRoman(int num) {
    unordered_map<int, string> romanMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                            {400, "CD"}, {100, "C"}, {90, "XC"},
                                            {50, "L"}, {40, "XL"}, {10, "X"},
                                            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string result = "";

    for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
        while (num >= it->first) {
            result += it->second;
            num -= it->first;
        }
    }

    return result;
}