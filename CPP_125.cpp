#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    std::string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string text = "apple orange banana";
    std::vector<std::string> words = split_words(text);
    for(const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}