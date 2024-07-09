#include <vector>
#include <string>

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> words;
    std::string word = "";
    
    for(char c: txt) {
        if(c == ' ' || c == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if(!word.empty()){
        words.push_back(word);
    }
    
    if(words.empty()){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        words.push_back(std::to_string(oddCount));
    }
    
    return words;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}