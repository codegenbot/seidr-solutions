#include <iostream>
#include <string>

int countCharacters(std::string str) {
    int count = 0;
    bool charSet[256] = {false};

    for (char c : str) {
        if (!charSet[int(c)]) {
            charSet[int(c)] = true;
            count++;
        }
    }

    return count;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << countCharacters(str);

    return 0;
}