```cpp
#include <string>
#include <iostream>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s = "";
    char temp[1000]; 
    while(std::cin.getline(temp, 1000)) { 
        if (!s.empty()) {
            s += "\n";
        }
        s += temp; 
    }
    if(s.empty()) {
        std::cout << "Error: Input string is empty." << std::endl;
    } else {
        int result = vowels_count(s);
        std::cout << "Number of vowels: " << result << std::endl;
    }
    return 0;
}