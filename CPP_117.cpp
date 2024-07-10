```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
typedef std::string my_string;

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
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }
    
    std::sort(words.begin(), words.end());
    
    std::vector<std::string> result;
    for (int i = 0; i < k && i < words.size(); ++i) {
        result.push_back(words[i]);
    }
    
    return result;
}

std::string Join(const std::vector<std::string>& vec, char delimiter) {
    std::stringstream ss;
    for (const auto& s : vec) {
        ss << s << delimiter;
    }
    return ss.str();
}

int main() {
    my_string my_result[] = {"b"};
    if (!issame(std::vector<my_string>(std::begin(my_result), std::end(my_result)), select_words("a b c d e f", 1))) 
        std::cout << "{" + Join(select_words("a b c d e f", 1), ", ") + "}" << std::endl;
    return 0;
}