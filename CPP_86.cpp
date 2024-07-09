#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (left % 2 == 0) {
            std::swap(s[left], s[right]);
            left++;
            right--;
        } else {
            left++;
        }
    }

    return s;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  
    std::string res = anti_shuffle(str);
    std::cout << "Anti-Shuffled String: " << res << std::endl;
    return 0;
}