#include <iostream>
#include <string>
#include <cctype>

int count_upper(const std::string& input) {
    int count = 0;
    for (int i = 0; i < input.length(); ++i) {
        if(i % 2 == 0 && isupper(input[i])) {
            char c = tolower(input[i]); // Convert to lowercase
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
    }
    return count;
}