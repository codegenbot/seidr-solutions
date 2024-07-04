#include <iostream>
#include <string>
#include <cassert>

int count_upper(const std::string& s) {
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    // Additional tests can be added here
    std::cout << "All tests passed.\n";
    return 0;
}