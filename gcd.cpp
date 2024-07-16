#include <iostream>
#include <vector>
#include <sstream>

int extendedGCD(int a, int b) {
    int x = 0, y = 1, lastx = 1, lasty = 0, temp;
    while (b != 0) {
        int q = a / b;
        int r = a % b;
        
        a = b;
        b = r;

        temp = x;
        x = lastx - q * x;
        lastx = temp;

        temp = y;
        y = lasty - q * y;
        lasty = temp;
    }

    return lastx;
}

std::vector<int> findIndices(const std::vector<int>& numbers, int a, int b) {
    int gcd = extendedGCD(a, b);
    std::vector<int> indices;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % gcd == 0) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n, a, b;
    std::vector<int> numbers;

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    iss >> n >> a >> b;
    
    std::getline(std::cin, line);
    std::istringstream iss2(line);
    numbers.resize(n);
    for (int i = 0; i < n; ++i) {
        iss2 >> numbers[i];
    }
    
    std::vector<int> result = findIndices(numbers, a, b);
    
    for (int idx : result) {
        std::cout << idx << " ";
    }
    
    return 0;
}