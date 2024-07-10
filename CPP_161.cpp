```cpp
#include <iostream>
#include <string>
#include <vector>

int solve(std::string s) {
    std::vector<char> v(std::vector<char>::allocator_type()); // Initialize here
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v.push_back(std::tolower(c));
        }
    }
    return v.size();
}

int main(){}