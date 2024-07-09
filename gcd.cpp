```
#include <iostream>
#include <vector>

int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(b); 
}

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "The GCD is: " << result << std::endl;

    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::cin >> target;

    std::vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}