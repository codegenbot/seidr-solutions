```cpp
#include <vector>
#include <cmath>
#include <limits>

bool issame(float a, float b) {
    return std::abs(a - b) < 0.0001;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float minVal = l[0];
            for (float val : l) {
                if (!issame(val, minVal)) {
                    minVal = val;
                }
            }
            result[i] = minVal;
        } else {
            int j = i - 1;
            while (j >= 0 && !issame(l[j], result[j])) {
                --j;
            }
            if (j >= 0) {
                result[i] = l[j + 1];
            } else {
                float minVal = l[0];
                for (float val : l) {
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
    int i;  
    std::vector<float> input;
    float num;
    #pragma GCC c++11
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        input.push_back(num);
    }
    std::vector<float> result = sort_even(input);
    return 0;
}