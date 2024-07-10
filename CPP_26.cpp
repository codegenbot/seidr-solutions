```cpp
#include <iostream>
#include <vector>
#include <set>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::set<int> unique;
    for(int x: v) {
        unique.insert(x);
    }
    return std::vector<int>(unique.begin(), unique.end());
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        input.push_back(x);
    }
    
    std::vector<int> output = remove_duplicates(input);
    
    std::cout << "Unique elements: ";
    for(int x: output) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}