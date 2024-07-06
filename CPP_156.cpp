```cpp
#include <initializer_list>

std::string int_to_mini_roman(int number) {
    std::string mini_roman;
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            mini_roman += pair.second;
            number -= pair.first;
        }
    }
    return mini_roman;
}

int main() {
    std::vector<std::pair<int, const char*>> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}