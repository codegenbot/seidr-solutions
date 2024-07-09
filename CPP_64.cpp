#include <iostream>
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    bool has_y_as_last_char = false;
    
    if (!s.empty()) {
        char last_char = s.back();
        has_y_as_last_char = (last_char == 'y');
        s.pop_back(); // remove the last character to avoid incorrect find() usage
    }
    
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') && 
            !has_y_as_last_char) {
            count++;
        } else if (c == 'y' && has_y_as_last_char) {
            count++;
        }
    }
    
    // if the string ends with 'y', add 1 to the total count
    return s.empty() || s.back() != 'y' ? count : ++count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int vowelCount = vowels_count(str);
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    return 0;
}