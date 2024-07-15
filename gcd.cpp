```
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int target_len = target.length();
    for(int i = 0; i <= text.length() - target_len; i++) {
        bool found = true;
        for(int j = 0; j < target_len; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::endl;
    std::cout << gcd(a, b) << std::endl;

    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> indices = findIndices(text, target);
    for(int i : indices)
        std::cout << i << " ";
    return 0;
}