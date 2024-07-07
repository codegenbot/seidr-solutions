#include <iostream>
#include <vector>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float minVal = l[0];
            for (float val : l) {
                if (val < minVal) {
                    minVal = val;
                }
            }
            result[i] = minVal;
        } else {
            int j = i - 1;
            while (j >= 0 && !issame(std::vector<float>({l[j], l}), std::vector<float>({result[j]}))) {
                --j;
            }
            if (j >= 0) {
                result[i] = l[j + 1];
            } else {
                float minVal = l[0];
                for (float val : l) {
                    if (val < minVal) {
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
    std::vector<float> result = sort_even(input);
    for (float val : result) {
        std::cout << val << " ";
    }
    return 0;
}