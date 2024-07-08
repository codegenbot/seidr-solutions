```cpp
#include <iostream>
#include <string>

int is_bored(std::string S){
    int count = 0;
    for(int i=0; i<S.size(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(S.substr(0, i).find("I") == 0) count++;
            S.erase(0, i+1);
        }
    }
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    int result = is_bored(sentence);
    std::cout << "I'm bored after reading the sentence " << result << " times." << std::endl;
    return 0;
}