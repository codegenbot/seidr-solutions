#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> result = generate_integers(17, 89);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}