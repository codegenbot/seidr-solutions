#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    std::string text = "Hello World!";
    std::string target = "o";
    std::vector<int> indices;

    int index = 0;
    while ((index = text.find(target)) != std::string::npos) {
        indices.push_back(index);
        text.erase(index, target.length());
    }

    for (int i : indices) {
        std::cout << "Target appears at index: " << i << std::endl;
    }
    return 0;
}