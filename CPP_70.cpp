```cpp
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> sortList(const std::vector<int>& input) {
    std::vector<int> output(input);
    std::sort(output.begin(), output.end());
    return output;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> input;
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    std::vector<int> output = sortList(std::vector<int>(input.begin(), input.end()));
    std::cout << "Sorted list: ";
    for(int i : output) {
        std::cout << i << " ";
    }
}