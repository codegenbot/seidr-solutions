#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        if (str.substr(i, subLen) == substring) {
            count++;
        }
    }

    return count;
}

int main() {
    std::string str, substring;
    std::cout << "Enter the original string: ";
    std::cin >> str;
    std::cout << "Enter the substring to search: ";
    std::cin >> substring;

    int result = how_many_times(str, substring);
    std::cout << "The substring \"" << substring << "\" appears " << result << " times in the original string." << std::endl;

    return 0;
}