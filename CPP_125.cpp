#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

std::vector<std::string> split_words(const std::string& str) {
    std::vector<std::string> words;
    
    size_t start = 0, end = 0;
    while ((start = str.find_first_not_of(' ', end)) != std::string::npos) {
        end = str.find(' ', start);
        words.push_back(str.substr(start, end - start));
    }
    
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"})); 
    return 0;
}