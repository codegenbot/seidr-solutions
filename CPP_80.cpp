```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        char c1 = s[i];
        char c2 = s[i + 1];
        char c3 = s[i + 2];
        int count1 = 0, count2 = 0, count3 = 0;
        for (int j = i; j < s.length(); j++) {
            if (s[j] == c1)
                count1++;
            else if (s[j] == c2)
                count2++;
            else if (s[j] == c3)
                count3++;
            else
                break;
        }
        if ((count1 > 1) || (count2 > 1) || (count3 > 1))
            return false;
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s); 
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}