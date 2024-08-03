#include<iostream>
#include<vector>

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
    int textSize = text.size();
    int targetSize = target.size();
    
    for (int i = 0; i <= textSize - targetSize; ++i) {
        if (text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::cin.ignore();
    
    std::string text, target;
    getline(std::cin, text);
    getline(std::cin, target);

    std::vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}