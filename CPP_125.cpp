#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int count_odd_letters(std::string txt) {
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (std::isalpha(txt[i])) {
            int letterOrder = std::tolower(txt[i]) - 'a';
            if (letterOrder % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

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

int main() {
    // Test the functions
    std::vector<std::string> v1 = {"hello", "world"};
    std::vector<std::string> v2 = {"hello", "world"};
    assert(issame(v1, v2) == true);

    std::string txt = "Hello, World!";
    assert(count_odd_letters(txt) == 3);

    std::string txt2 = "This is a sample sentence.";
    std::vector<std::string> words = split_words(txt2);
    for (const auto& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}