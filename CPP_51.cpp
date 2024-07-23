#include <string>
#include <cctype>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for(char c : text){
        if(!strchr("aeiouAEIOU",std::tolower(c)) != NULL) {
            result += c;
        }
    }
    return result;
}

int main() {
    int x{}; // Initialize an integer variable
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}