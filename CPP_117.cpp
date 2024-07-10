```cpp
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

bool issame(std::vector<std::string> v1, std::string s) {
    for (const auto& str : v1) {
        if (str != s) return false;
    }
    return true;
}

std::vector<std::string> select_words(const std::string& input, int num) {
    std::istringstream iss(input);
    std::vector<std::string> words;
    for (std::string word; iss >> word;) {
        words.push_back(word);
    }
    if (num > 0 && num <= words.size()) {
        return {words.begin(), words.begin() + num};
    } else {
        return words;
    }
}

int main() {
    std::vector<std::string> result = select_words("a b c d e f", 1);
    assert(issame(result, "b")); 
    std::cout << "{" + std::join(result, ", ") + "}" << std::endl;
    return 0;
}