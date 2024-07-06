```cpp
#include <iostream>
#include <string>

int is_bored(std::string S);

int main() {
    std::string line;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, line);
    
    int result = is_bored(line);  // Call the function with the user's input
    
    return 0;
}

int is_bored(std::string S) {
    int count = 0; 
    int pos = 0;
    while ((pos = S.find("I", pos)) != std::string::npos) {
        if (S[pos] == 'I' && (S[pos + 1] == '.' || S[pos + 1] == '?' || S[pos + 1] == '!')) {
            count++;
        }
        pos = S.find("I", pos);
    }
    
    return count;
}