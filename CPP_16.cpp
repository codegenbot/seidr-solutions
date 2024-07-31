```cpp
#include <iostream>
#include <string>
#include <set>

int countDistinctCharacters(const std::string& str) {
    std::set<char> distinctChars;
    for (char c : str) {
        distinctChars.insert(c);
    }
    return distinctChars.size();
}

int mainFunc() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 
    int result = countDistinctCharacters(str);
    std::cout << "Number of distinct characters: " << result << std::endl;
    return 0;
}