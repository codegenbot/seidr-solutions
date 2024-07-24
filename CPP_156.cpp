#include <vector>
#include <string>

using namespace std;

void int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                         {400, "CD"}, {100, "C"}, {90, "XC"},
                                         {50, "L"}, {40, "XL"}, {10, "X"},
                                         {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string result = "";
    for (const auto& pair : roman) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
}

int main(int argc, char *argv[]) {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}