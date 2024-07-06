```cpp
#include <iostream>
#include <sstream>
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::istringstream iss(S);
    std::string word;

    while(getline(iss, word, ' ')) {
        if(word.size() > 0 && word[0] == 'I')
            ++count;
    }
    return count;
}

int main() {
    std::string S;
    std::cout << "Enter a string: ";
    std::getline(std::cin, S);
    int result = is_bored(S);
    if(result > 0) {
        std::cout << "Warning! It seems like you are feeling a bit bored.\n";
    } else {
        std::cout << "You don't seem to be feeling bored.\n";
    }
    return 0;
}