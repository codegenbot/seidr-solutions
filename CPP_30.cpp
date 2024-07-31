#include <vector>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    std::cout << "Enter numbers separated by space: ";
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    vector<float> positive = get_positive(input);
    if (issame(positive, input)) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
    return 0;
}