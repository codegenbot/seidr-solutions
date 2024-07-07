```cpp
#include <string>
#include <cassert>

std::string toMiniRomanHelper(int num, std::string roman, std::string symbols) {
    if (num == 0)
        return roman;

    size_t i = symbols.find_first_of("IVXL");
    if (i != std::string::npos) {
        int count = 1;
        while ((i + 1 < symbols.size()) && (symbols[i+1] == symbols[i])) {
            ++i; ++count;
        }
        if (count == 3)
            roman += symbols[i];
        else
            for (int j = 0; j < count; ++j) 
                roman += symbols[i];

        num -= count * (symbols[i] - 'I');
    } else {
        int value = std::stoi(symbols.substr(0,1));
        if (value <= num) {
            roman += symbols[0];
            num -= value;
            return toMiniRomanHelper(num, roman, std::string(symbols.begin() + i, symbols.end()));
        }
    }

    return roman;
}

std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "";
    return toMiniRomanHelper(num, "", "MDC");
}

int main() {
    assert(int_to_mini_roman(1000).compare("M") == 0);
}