```cpp
#include <iostream>
#include <vector>
#include <string>

int greatestCommonDivisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}

std::vector<int> findIndices(std::string& mainString, std::string target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = mainString.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }
    return indices;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    int result = greatestCommonDivisor(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;

    std::string mainString;
    std::cout << "Enter the main string: ";
    std::getline(std::cin, mainString);

    std::string target;
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    
    std::vector<int> indices = findIndices(mainString, target);
    for (int i : indices) {
        std::cout << "Index found at position: " << i << std::endl;
    }
}