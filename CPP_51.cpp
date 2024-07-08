#include <algorithm>
#include <cctype>
#include <string>
#include <unordered_set>

std::string remove_vowels(std::string str) {
    std::string result;
    for (char c : str) {
        if (!std::unordered_set<char>("aeiouAEIOU").count(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}