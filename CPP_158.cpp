#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words);

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    return 0;
}

std::string find_max(std::vector<std::string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
    });
    return max_word;
}