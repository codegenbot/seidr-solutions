```cpp
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    getline(cin, input);  
    int result = vowels_count(input);
    std::cout << "Number of vowels: " << result << std::endl;
    return 0;
}