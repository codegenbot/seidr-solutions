#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words){
    std::string result = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.size() != b.size()) return a.size() > b.size();
            return a < b;
        }
    );
    return result;
}