#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (std::find(b.begin(), b.end(), num) != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int a_size, b_size;
    std::cin >> a_size >> b_size;
    
    std::vector<int> a(a_size), b(b_size);
    for (int i = 0; i < a_size; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < b_size; ++i) {
        std::cin >> b[i];
    }
    
    std::vector<int> result = common(a, b);
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}