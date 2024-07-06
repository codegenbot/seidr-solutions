```cpp
#include <vector>
#include <string>
#include <sstream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    for(int i = 0; i < num; ++i){
        std::getline(ss, ' ');
        while (ss.peek() == ' ')
            ss.ignore();
        words.push_back(std::string());
        words.back() = ss.str();
        ss >> std::skipws;
    }
    return words;
}