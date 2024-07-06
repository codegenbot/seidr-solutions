```
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
    return is_bored("I am bored and tired. I will go to bed"); 
}