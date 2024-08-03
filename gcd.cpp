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
    // Implement your logic to find indices of target in text
    return indices;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin.ignore();
    std::getline(std::cin, text);
    std::getline(std::cin, target);
  
    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}