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
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    std::cout << find_max(words) << std::endl;
    return 0;
}