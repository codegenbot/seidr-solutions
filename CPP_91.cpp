#include <iostream>
#include <string>
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
    std::string input_string = "Input this string for I-words";
    int bored_count = is_bored(input_string); 
    std::cout << "Number of I-word: " << bored_count << std::endl;
    return 0;
}