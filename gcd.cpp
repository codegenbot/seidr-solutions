#include <algorithm>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i++; // start looking for the next match from where the last one ended
        }
    }
    return result;
}

#include <iostream>

int main() {
    std::string text, target;
    int g;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    
    if (text.empty() || target.empty()) {
        std::cout << "Invalid input! Please try again." << std::endl;
        return 1; // or some other appropriate value to indicate an error
    }
    
    int gcdResult = gcd(text.size(), target.size());
    
    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        if(i % gcdResult == 0)
            std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}