#include <iostream>
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
    std::cout << "Enter a string: ";
    std::getline(std::cin, S);
    int result = is_bored(S);
    std::cout << "Count of words starting with I: " << result << std::endl;
    return 0;
}