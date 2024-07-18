#include <string>
#include <vector>
#include <cassert>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";
    bool hasWhitespace = false;
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    if (result.empty() && !hasWhitespace) {
        int count = 0;
        for (char c : txt) {
            if (std::islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    
    return result;
}