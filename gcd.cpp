```cpp
#include <vector>
#include <iostream>
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
        return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text;
    char c;
    std::cin >> c >> text; // reads one character and the rest of the line
    std::string target;
    std::cin >> target;
    std::vector<int> result = findIndices(text, target);
    for (int i : result)
        std::cout << i << " ";
    return 0;
}