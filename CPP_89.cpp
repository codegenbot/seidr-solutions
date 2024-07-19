```cpp
#include<string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += base + newShift;
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = (int)(c - base);
            int newShift = (shift + 2 * 26) % 26;
            result += base + newShift;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    // usage of encrypt function
}