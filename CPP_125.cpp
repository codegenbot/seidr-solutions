#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    return result;
}

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    if (is_same(split_words("") ,std::vector<std::string>{"0"})) {
        std::cout << "Test case passed!" << std::endl;
    } else {
        std::cout << "Test case failed!" << std::endl;
    }
}