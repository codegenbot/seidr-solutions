#include <vector>
#include <string>
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    std::cout << "Enter two integers to find their greatest common divisor (gcd): ";
    std::cin >> a >> b;

    int result = gcd(a, b);
    std::cout << "Greatest Common Divisor (gcd) is: " << result << std::endl;

    std::string text, target;
    std::cout << "Enter a text string: ";
    std::cin >> text;

    std::cout << "Enter a target string to find its indices in the text: ";
    std::cin >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);

    std::cout << "Indices of the target string in the text are: ";
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}