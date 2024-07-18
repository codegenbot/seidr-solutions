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
    int n;
    std::vector<int> a, b;
    
    std::cout << "Enter the number of elements in the first vector a: ";
    std::cin >> n;
    a.resize(n);
    std::cout << "Enter " << n << " elements for vector a: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cout << "Enter the number of elements in the second vector b: ";
    std::cin >> n;
    b.resize(n);
    std::cout << "Enter " << n << " elements for vector b: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }
    
    std::vector<int> commonElements = common(a, b);
    
    std::cout << "Common elements are: ";
    for (int num : commonElements) {
        std::cout << num << " ";
    }
    
    return 0;
}