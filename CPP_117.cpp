```cpp
#include <cassert>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> select_words(const std::string& str, int num) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    for(int i = 0; i < num; ++i){
        if(i >= num-1)
            break;
        std::getline(ss, " ", '\n');
        words.push_back(std::string());
        while (ss.peek() == ' ')
            ss.ignore();
        ss >> words.back();
    }
    return words;
}

int main() {
    assert(select_words("a b c d e f", 4) == {"b", "c", "d", "f"});
}