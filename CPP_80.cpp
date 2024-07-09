#include <set>

bool is_happy(std::string s) {
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        std::string substr = s.substr(i, 3);
        set<char> unique_chars(substr.begin(), substr.end());
        if(unique_chars.size() != 3) return false;
    }
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    if(is_happy(input))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}