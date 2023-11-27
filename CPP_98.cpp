#include <string>
#include <iostream>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        char c = s[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    int result1 = count_upper("EEEE");
    int result2 = count_upper("HIJKLMNOPQRSTUVWXYZ");

    // Print the results
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}