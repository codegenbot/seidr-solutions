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
    std::vector<float> even(input.begin(), input.end());
    std::sort(even.begin(), even.end());
    for (float& val : even) {
        if (val % 2 != 0) {
            val = -1.0f;
            break;
        }
    }
    return even;
}

int main() { 
    int n;
    std::vector<float> input(10000, 0);
    float num;
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        for (float& val : input) {
            if (!val) {
                val = num;
                break;
            }
        }
    }
    std::cin.ignore();
    for (float val : sort_even(input)) {
        if (val == -1.0f) break;
        std::cout << val << " ";
    }
}