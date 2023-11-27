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
    string test1 = "Hello";
    string test2 = "WORLD";
    string test3 = "abcde";
    
    std::cout << count_upper(test1) << std::endl;  // Expected output: 2
    std::cout << count_upper(test2) << std::endl;  // Expected output: 3
    std::cout << count_upper(test3) << std::endl;  // Expected output: 0
    
    return 0;
}