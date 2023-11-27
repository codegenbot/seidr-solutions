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
    string s1 = "HELLO";
    string s2 = "WORLD";
    string s3 = "C++";
    
    // Expected outputs
    int output1 = 2;
    int output2 = 1;
    int output3 = 0;
    
    // Test the count_upper function with the test cases
    int result1 = count_upper(s1);
    int result2 = count_upper(s2);
    int result3 = count_upper(s3);
    
    // Print the results
    std::cout << result1 << std::endl; // Expected output: 2
    std::cout << result2 << std::endl; // Expected output: 1
    std::cout << result3 << std::endl; // Expected output: 0
    
    return 0;
}