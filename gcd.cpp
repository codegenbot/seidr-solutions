```
#include <vector>
#include <iostream>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int length = target.length();
    for(int i=0; i<=text.length()-length; i++) {
        if(text.substr(i, length) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int result = gcd(num1, num2);
    std::vector<int> indices = findIndices("Hello World Hello", "Hello");
    
    std::cout << "GCD of the two numbers is: " << result << std::endl;
    for(int i: indices) {
        std::cout << i << " ";
    }
    return 0;
}