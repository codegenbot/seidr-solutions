#include <cassert>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> words, std::string substr){
    std::vector<std::string> filtered_words;
    for(const std::string& word : words){
        if(word.find(substr) != std::string::npos){
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main(){
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // Add more test cases here

    return 0;
}