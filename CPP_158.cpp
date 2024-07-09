```cpp
#include <iostream>
#include <vector>
#include <set>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *words.begin();
    int max_unique_chars = 0;
    
    for(auto word : words){
        int unique_chars = 0;
        std::set<char> char_set(word.begin(), word.end());
        
        if(char_set.size() > max_unique_chars){
            max_unique_chars = char_set.size();
            max_word = word;
        }
    }
    
    return max_word;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    std::cout << "Passed assertion test." << std::endl;
    return 0;
}