#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
                                            [](const std::string& a, const std::string& b) {
                                                return count(a.begin(), a.end(), unique(a.begin(), a.end())[0]) > 
                                                       count(b.begin(), b.end(), unique(b.begin(), b.end())[0]);
                                            });
    return max_word;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}