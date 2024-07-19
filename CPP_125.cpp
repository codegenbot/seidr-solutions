#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> split_words(std::string txt){
        std::vector<std::string> result;
        std::string word = "";
        for(char c : txt){
            if(c == ' ' || c == ','){
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        if(word != ""){
            result.push_back(word);
        }
        if(result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos){
            result = {std::to_string(std::count_if(result[0].begin(), result[0].end(), [](char c){ return c >= 'a' && c <= 'z' && (c - 'a') % 2 == 1; } ))};
        }
        return result;
}

// Add necessary includes and fix function signature - should be placed before main()

int main(){
    assert(issame(split_words(""), {"0"}));
}