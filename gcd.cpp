#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        bool found = true;
        for(int j=0; j<m; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::string text, target;
    std::cout << "Enter the text string: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);
    if(indices.empty()) {
        std::cout << "Target not found in text." << std::endl;
    } else {
        std::cout << "Indices of Substring: ";
        for(int i : indices) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}