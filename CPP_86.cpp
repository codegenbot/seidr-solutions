```
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    for (char i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    result[j] = s[i];
                }
                j++;
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << anti_shuffle(input) << std::endl;
    return 0;
}
```