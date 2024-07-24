#include <algorithm>
#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words);

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        });
    for(const auto &word : words){
        if(count(word.begin(), word.end(), word[0]) > count(max_word.begin(), max_word.end(), max_word[0])){
            max_word = word;
        }
    }
    return max_word;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
}