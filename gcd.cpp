```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == std::string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
    {
        while(b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}

int main() {
    int a, b;
    std::cout << "Enter two integers for GCD: ";
    std::cin >> a;
    while ((std::cin.peek() != '\n') && (std::cin.peek() != EOF)) std::cin.ignore();
    std::cin >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cout << "Enter the text and target string for Indices of Substring: ";
    std::getline(std::cin, text);
    std::cin.ignore();
    std::getline(std::cin, target);
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}