#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;
    int result = count_upper(str);
    std::cout << "Count of upper case letters: " << result << std::endl;
    return 0;
}