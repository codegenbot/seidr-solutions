```cpp
#include <iostream>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            std::string temp = "";
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
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Anti-shuffled String: " << anti_shuffle(str) << std::endl;
    return 0;
}