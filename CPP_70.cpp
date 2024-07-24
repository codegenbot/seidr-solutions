#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> sortList(std::vector<int> input) {
    for(int i = 0; i < input.size(); i++) {
        for(int j = i + 1; j < input.size(); j++) {
            if(input[i] > input[j]) {
                std::swap(input[i], input[j]);
            }
        }
    }
    return input;
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
    return 0;