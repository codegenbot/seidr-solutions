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
    string test3 = "AbCdEfG";
    
    // Expected outputs
    int expected1 = 2;
    int expected2 = 2;
    int expected3 = 4;
    
    // Test the count_upper function
    int result1 = count_upper(test1);
    int result2 = count_upper(test2);
    int result3 = count_upper(test3);
    
    // Check if the results match the expected outputs
    if(result1 == expected1 && result2 == expected2 && result3 == expected3) {
        return 0; // Return 0 if all test cases pass
    } else {
        return 1; // Return 1 if any test case fails
    }
}