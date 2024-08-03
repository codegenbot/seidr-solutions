#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> findIndicesOfSubstring(std::string text, std::string target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += 1;
    }
    return indices;
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin.ignore();
    getline(std::cin, text);
    getline(std::cin, target);

    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}