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
    std::string s;
    std::cin >> s;
    std::cout << "Number of uppercase characters is: " << count_upper(s) << "\n";
    return 0;
}