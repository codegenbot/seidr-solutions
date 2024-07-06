```cpp
#include <string>
#include <iostream>
#include <sstream>

int is_bored(std::string S){
    int count = 0;
    std::istringstream iss(S);
    std::string word;

    while(iss >> word) {
        if(word.size() > 0 && word[0] == 'I')
            ++count;
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    
    int result = is_bored(str);
    
    if(result > 0)
        std::cout << "You're getting bored with " << result << " instances of 'I'." << std::endl;
    else
        std::cout << "No signs of boredom found!" << std::endl;

    return 0;
}