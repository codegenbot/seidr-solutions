```c++
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
    while ((std::cin >> std::ws).peek() == '\n') 
        std::cin.ignore();
    char buffer[256];
    std::cin.getline(buffer, 256); 
    str = std::string(buffer);
    int result = countDistinctCharacters(str);
    std::cout << "Number of distinct characters: " << result << std::endl;
    assert(countDistinctCharacters("Jerry jERRY JeRRRY") == 5);
    return 0;
}