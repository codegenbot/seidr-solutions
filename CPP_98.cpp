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
    string test1 = "Hello World";
    string test2 = "AEIOU";
    string test3 = "";

    std::cout << count_upper(test1) << std::endl; // Expected output: 1
    std::cout << count_upper(test2) << std::endl; // Expected output: 5
    std::cout << count_upper(test3) << std::endl; // Expected output: 0

    return 0;
}