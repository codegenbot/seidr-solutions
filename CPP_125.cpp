#include <string>
#include <vector>
#include <iostream>

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& txt){
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
    
    if(result.size() == 1 && result[0].find(',') == std::string::npos){
        int count = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result[0] = std::to_string(count);
    }
    
    return result;
}

int main() {
    std::string input1, input2;
    std::getline(std::cin, input1);
    std::getline(std::cin, input2);
    
    std::vector<std::string> a = split_words(input1);
    std::vector<std::string> b = split_words(input2);
    
    if (is_same(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}