#include <bits/stdc++.h>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'U') || (s[i] >= 'a' && s[i] <= 'u')) {
            count++;
        }
    }
    if(count > 4) std::cout << "Error: More than 4 upper case letters detected." << std::endl;
    return count;
}

int main() {
    std::string input;
    std::cin >> input;
    int result = count_upper(input);
    std::cout << "Number of upper case letters: " << result << std::endl;
    return 0;
}