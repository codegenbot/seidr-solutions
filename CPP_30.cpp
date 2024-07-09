#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    // Ask the user to input numbers
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    
    // Display the positive numbers
    std::vector<float> posNums = get_positive(input);
    std::cout << "Positive numbers: ";
    for (float num : posNums) {
        std::cout << num << " ";
    }
    return 0;
}