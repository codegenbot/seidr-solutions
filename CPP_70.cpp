```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sortList(const std::vector<int>& input) {
    std::vector<int> output(input);
    std::sort(output.begin(), output.end());
    return output;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    std::vector<int> output = sortList(input);
    std::cout << "Sorted list: ";
    for(int i : output) {
        std::cout << i << " ";
    }
}