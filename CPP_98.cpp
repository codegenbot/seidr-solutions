#include <iostream>
#include <string> // Include the header for std::string

int count_upper(const std::string &s){ // Use std::string and pass by reference
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    // Add some test cases
    std::cout << count_upper("EEEE") << std::endl; // Expected output: 2
    return 0;
}