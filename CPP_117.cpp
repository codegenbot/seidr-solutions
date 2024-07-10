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

std::vector<my_string> select_words(std::string input, int k) {
    std::istringstream iss(input);
    std::vector<my_string> words;
    my_string word;
    while (iss >> word) {
        words.push_back(word);
    }
    
    std::sort(words.begin(), words.end());
    
    std::vector<my_string> result;
    for (int i = 0; i < k && i < words.size(); ++i) {
        result.push_back(words[i]);
    }
    
    return result;
}

int main() {
    my_string my_result[] = {"b"};
    if (!issame({{"b"}}, my_result)) 
    std::cout << "{" + Join(select_words("a b c d e f", 1), ", ") + "}" << std::endl;
    return 0;
}

my_string Join(const std::vector<my_string>& vec, char delimiter) {
    std::stringstream ss;
    for (const auto& s : vec) {
        ss << s << delimiter;
    }
    return ss.str();
}