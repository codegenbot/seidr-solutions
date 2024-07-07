#include <vector>
#include <cmath>

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
    std::vector<float> input;
    float num;
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        input.push_back(num);
    }
    std::sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            float minVal = input[0];
            for (float val : input) {
                if (!issame(val, minVal)) {
                    minVal = val;
                }
            }
            std::cout << minVal << " ";
        } else {
            int j = i - 1;
            while (j >= 0 && !issame(input[j], input[i])) {
                --j;
            }
            if (j >= 0) {
                std::cout << input[j + 1] << " ";
            } else {
                float minVal = input[0];
                for (float val : input) {
                    if (!issame(val, minVal)) {
                        minVal = val;
                    }
                }
                std::cout << minVal << " ";
            }
        }
    }
    return 0;
}