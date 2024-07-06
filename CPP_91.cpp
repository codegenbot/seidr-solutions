```cpp
#include <string>
#include <iostream>
#include <sstream>

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

int main(){
    std::string S;
    std::cout << "Enter a sentence: ";
    std::cin >> S;
    
    int result = is_bored(S);
    
    if(result > 0)
        std::cout << "Bored\n";
    else
        std::cout << "Not Bored\n";

    return 0;
}