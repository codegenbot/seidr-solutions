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