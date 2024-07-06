```c++
#include <algorithm>
#include <vector>
#include <string>

std::string find_max(std::vector<std::string> words);

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.size() == b.size()) ? a < b : a.size() < b.size();
        });
    return max_word;
}