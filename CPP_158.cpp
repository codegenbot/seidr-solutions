#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
        });
    return max_word;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}