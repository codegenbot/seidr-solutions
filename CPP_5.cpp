#include <iostream>
#include <vector>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
   
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        
        if (i != numbers.size() - 1) {
            result.push_back(delimiter); 
        }
    }
    
    return result;
}

void assert(bool condition) {
    if (!condition) {
        std::cout << "Assertion failed." << std::endl;
    }
}

void issame(std::vector<int> result, std::vector<int> expected) {
    if (result.size() != expected.size()) {
        std::cout << "Size mismatch." << std::endl;
        return;
    }
    
    for (int i = 0; i < result.size(); i++) {
        if (result[i] != expected[i]) {
            std::cout << "Element mismatch at index " << i << "." << std::endl;
            return;
        }
    }
    
    std::cout << "Test passed." << std::endl;
}

int main() {
    issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2});
    return 0;
}