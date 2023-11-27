#include <iostream>
#include <string>

int count_upper(const string& s){
    int count = 0;
    for(int i = 0; i < s.length(); i+=2){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    std::cout << count_upper("Hello World") << std::endl;  // Expected output: 1
    std::cout << count_upper("AbCdEfG") << std::endl;     // Expected output: 4
    std::cout << count_upper("aeiou") << std::endl;       // Expected output: 0
    
    return 0;
}