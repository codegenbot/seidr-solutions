#include <iostream>
#include <string>
#include <list>

int main() {
    std::string text, target;
    std::cin >> text; // Read input from the user for the text string
    std::cin >> target; // Read input from the user for the target string
    
    std::list<int> result = indicesOfSubstring(text, target);
    
    for (auto idx : result) {
        std::cout << idx << " ";
    }
    return 0;
}