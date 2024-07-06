```cpp
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    bool issame(const std::vector<std::string>& a, const std::string& b) {
        return (a == std::vector<std::string>{b});
    }
    for(int i = 0; i < num; ++i){
        std::string word;
        while (ss.peek() == ' ')
            ss.ignore();
        ss >> word;
        words.push_back(word);
    }
    return words;
}