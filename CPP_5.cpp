#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;

    for (int i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);

        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }

    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    if (issame(a, b)) {
        std::vector<int> interspersed = intersperse(a, 0);
        
        for (int num : interspersed) {
            std::cout << num << " ";
        }
    }
    
    return 0;
}