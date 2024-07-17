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
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
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