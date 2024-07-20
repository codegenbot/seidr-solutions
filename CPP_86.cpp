#include <iostream>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            string temp = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                temp += s[j];
                i = j;
            }
            sort(temp.begin(), temp.end());
            result += temp;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Anti-shuffled string: " << anti_shuffle(input) << std::endl;
    return 0;
}