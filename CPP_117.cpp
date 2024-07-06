#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    for(int i = 0; i < num; ++i){
        std::getline(ss, " ");
        words.push_back(std::string());
        while (ss.peek() == ' ')
            ss.ignore();
        ss >> words.back();
    }
    return words;
}