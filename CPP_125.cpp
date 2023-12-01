#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split_words(std::string txt);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    std::vector<std::string> a = {"apple", "banana", "cherry"};
    std::vector<std::string> b = split_words("apple,banana,cherry");
    
    if(issame(a, b)){
        std::cout << "Same" << std::endl;
    }
    else{
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> words;
    std::string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }

    if(word != ""){
        words.push_back(word);
    }

    if(words.empty()){
        words.push_back(std::to_string(3));
    }

    return words;
}