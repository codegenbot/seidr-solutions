#include <string>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *max_element(words.begin(),words.end(),
        [](const std::string& a, const std::string& b)->bool{
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        }
    );
    return max_word;
}