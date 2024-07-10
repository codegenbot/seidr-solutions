#include <string>
#include <algorithm>
#include <iostream>
#include <ostream>

int is_bored(const std::string& S){
    int count = 0;
    for(size_t i = 0; i < S.length(); ++i) {
        if(S[i] == 'I' && i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input; 
    std::cout << "Enter a string: ";
    getline(std::cin, input); 
    int result = is_bored(input);
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}