```cpp
#include <vector>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return max_word;
}

int main(){
    std::vector<std::string> input;
    std::cout << "Enter words (enter 'stop' to finish): ";
    std::string word;
    while(true){
        std::cin >> word;
        if(word == "stop") break;
        input.push_back(word);
    }
    std::cout << "The maximum length is: " << find_max(input) << std::endl;
}