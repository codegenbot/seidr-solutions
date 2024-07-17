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

std::vector<int> indices(std::string text, std::string target) {
    std::vector<int> result;
    int pos = 0; // position where we last found the target

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos++; // move to the next position
    }

    return result;
}

int main() {
    int a = 12; 
    int b = 15;
    std::cout << "GCD: " << gcd(a, b) << std::endl;

    std::string text = "HelloWorld";
    std::string target = "Wor";
    for (int i : indices(text, target)) {
        std::cout << "Index " << i << ": " << text.substr(i, target.size()) << std::endl;
    }

    return 0;
}