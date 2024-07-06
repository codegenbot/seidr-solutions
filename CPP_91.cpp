``` 
#include <iostream>
#include <sstream>
#include <string>

int main
{
    int count = 0;
    std::istringstream iss(std::cin.rdbuf());
    std::string word;

    while(iss >> word) {
        if(word.size() > 0 && word[0] == 'I')
            ++count;
    }
    std::cout << count;
}