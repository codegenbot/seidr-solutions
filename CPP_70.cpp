```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> sortList(const std::vector<int>& input) {
    std::vector<int> output = input;
    std::sort(output.begin(), output.end());
    return output;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> input(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> input[i];
    }
    std::vector<int> output = sortList(input);
    std::cout << "Sorted list: ";
    for(int i : output) {
        std::cout << i << " ";
    }
}