```cpp
#include <string>

std::string toMiniRomanHelper(int num, std::string s1, std::string s2) {
    if (num == 4) {
        return s2;
    } else if (num == 9) {
        return s1 + "I";
    } else {
        std::string temp = "";
        for (int i = 0; i < num / 5; i++) {
            temp += s1[0];
        }
        if (!temp.empty()) {
            temp += toMiniRomanHelper(num % 5, "", s2);
        } else {
            temp += toMiniRomanHelper(num, s1, s2);
        }
        return temp;
    }
}

std::string int_to_mini_romank(int n) {
    return toMiniRomanHelper(n, "M", "IV");
}

int main() {
    assert(int_to_mini_romank(1000) == "M");  
    return 0;
}