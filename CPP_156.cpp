```cpp
#include <string>
#include <cassert>

std::string toMiniRomanHelper(int num, std::string roman, const char* symbols) {
    if (num == 0)
        return roman;

    size_t i = 0;
    while (i < strlen(symbols)) {
        int count = 1;
        while ((i + 1 < strlen(symbols)) && (symbols[i+1] == symbols[i])) {
            ++i; ++count;
        }
        if (count == 3)
            roman += symbols[i];
        else
            for (int j = 0; j < count; ++j) 
                roman += symbols[i];

        num -= count * (symbols[i] - 'I');
    } 

    return roman;
}

std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "";
    return toMiniRomanHelper(num, "", "MDCXIV");
}

int main() {
    assert(int_to_mini_roman(1000).compare("M") == 0);
}