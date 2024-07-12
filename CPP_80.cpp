#include <iostream>
#include <string>
#include <unordered_map>

bool is_happy(const std::string& s) {
    std::unordered_map<char, int>(256);
    for (char c : s) {
        if (count.find(c) == count.end())
            count[c] = 1;
        else
            count[c]++;
    }
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second > 1)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    if (input == "exit")
        return 0;
    std::cout << (is_happy(input) ? "True" : "False") << std::endl;
    return 0;
}