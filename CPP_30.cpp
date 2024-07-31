#include <vector>
#include <string>
#include <iostream>
#include <sstream>

bool issame(std::vector<float> a, std::vector<float> b);
std::vector<float> get_positive(std::vector<float> l);

int original_main() {
    // Your code here...
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    original_main();
    std::vector<float> input;
    std::cout << "Enter numbers separated by space: ";
    std::string line;
    getline(std::cin, line);
    std::istringstream iss(line);
    while (iss >> input.push_back(stof)) {}
    std::vector<float> positive = get_positive(input);
    if (issame(positive, input)) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
    return 0;
}