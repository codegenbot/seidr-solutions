#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    return max_word;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}