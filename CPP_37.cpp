```cpp
#include <vector>
#include <cmath>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-messages"

bool issame(float a, float b) {
    return std::abs(a - b) < 0.0001;
}

std::vector<float> sort_even(std::vector<float> input) {
    std::vector<float> result(input.size());
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            float minVal = input[0];
            for (float val : input) {
                if (!issame(val, minVal)) {
                    minVal = val;
                }
            }
            result[i] = minVal;
        } else {
            int j = i - 1;
            while (j >= 0 && !issame(input[j], result[j])) {
                --j;
            }
            if (j >= 0) {
                result[i] = input[j + 1];
            } else {
                float minVal = input[0];
                for (float val : input) {
                    if (!issame(val, minVal)) {
                        minVal = val;
                    }
                }
                result[i] = minVal;
            }
        }
    }
    return result;
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
    #define _SCL_SECURE_NO_WARNINGS
    std::vector<float> result = sort_even(input);
    for (float val : result) {
        std::cout << val << " ";
    }
}