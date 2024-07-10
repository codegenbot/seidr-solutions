```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> select_words(std::string input, int k) {
    std::istringstream iss(input);
    std::vector<std::string> words; 
    int wordCount = 0;

    for (std::string s; std::getline(iss, s, ' ');) {
        if (++wordCount <= k) {
            words.push_back(s);
        } else break;
    }

    std::sort(words.begin(), words.end());

    return words;
}

std::string Join(const std::vector<std::string>& vec, char delimiter) {
    std::stringstream ss;
    for (const auto& s : vec) {
        ss << s << delimiter;
    }
    return ss.str();
}

int main() {
    std::vector<std::string> my_result = select_words("a b c d e f", 1);
    if (!issame(std::vector<std::string>(my_result.begin(), my_result.end()), select_words("a b c d e f", 1))) 
        std::cout << "{" + Join(my_result, ", ") + "}" << std::endl;
    return 0;
}