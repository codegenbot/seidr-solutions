#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    if (subLen == 0 || strLen == 0 || subLen > strLen) {
        return 0;
    }

    for (int i = 0; i <= strLen - subLen; i++) {
        if (str.substr(i, subLen) == substring) {
            count++;
        }
    }

    return count;
}

int main() {
    std::string str, substring;
    std::cin >> str >> substring;
    std::cout << how_many_times(str, substring) << std::endl;
    return 0;
}