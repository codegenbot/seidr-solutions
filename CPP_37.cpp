```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> input) {
    std::vector<float> even;
    for (float val : input) {
        if (val % 2 == 0) even.push_back(val);
    }
    std::sort(even.begin(), even.end());
    return even;
}

int main() { 
    int n;
    std::vector<float> input;
    float num;
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        input.push_back(num);
    }
    std::cin.ignore();
    for (float val : sort_even(input)) {
        std::cout << val << " ";
    }
}