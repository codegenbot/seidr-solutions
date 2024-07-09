#include <string>
#include <cctype>
#include <cassert>

int count_upper(std::string s){
    int count = 0;
    std::string vowels = "AEIOU";
    for (int i = 0; i < s.length(); i += 2) {
        if (std::isupper(s[i]) && vowels.find(s[i]) != std::string::npos) {
            count++;
        }
    }
    return count; 
} 

int main() {
    assert(count_upper("EEEE") == 2); 
}