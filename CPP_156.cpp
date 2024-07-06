```cpp
#include <vector>
#include <string>

std::string int_to_mini_roman(int n);

int main() {
    std::vector<std::pair<int, const char*>> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}

std::string int_to_mini_roman(int n) {
    if(n < 1) {
        return "";
    }
    
    for(const auto& pair : roman_map) {
        while(n >= pair.first) {
            n -= pair.first;
            std::string res = pair.second;
            if (!result.empty()) {
                res = " " + res;
            }
            result = res;
        }
    }
    return result;
}