#include <algorithm>
#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(std::count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) > std::count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end())[0])){
            max_word = word;
        }
    }
    return max_word;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    return 0;
}