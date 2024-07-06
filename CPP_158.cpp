#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(), 
        [&] (const std::string& a, const std::string& b) {
            int unique_chars_a = a.length() - std::count(a.begin(), a.end(), '*');
            int unique_chars_b = b.length() - std::count(b.begin(), b.end(), '*');
            if(unique_chars_a == unique_chars_b)
                return a < b;
            else
                return unique_chars_a > unique_chars_b;
    });
    return max_word;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    std::cout << find_max({"hello", "world", "*abc*def*g"}); 
}