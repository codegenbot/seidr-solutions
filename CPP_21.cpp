#include <iostream>
#include <vector>

bool issame(std::vector<float> numbers) {
    // Check if all numbers in the vector are the same
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] != numbers[0]) {
            return false;
        }
    }
    return true;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];

    // Find the minimum and maximum numbers in the vector
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    // Apply linear transformation to rescale the numbers
    std::vector<float> rescaled_numbers;
    for (int i = 0; i < numbers.size(); i++) {
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    std::vector<float> numbers = {1.5, 2.3, 0.8, 1.2};
    std::vector<float> rescaled = rescale_to_unit(numbers);

    std::cout << "Rescaled numbers: ";
    for (float num : rescaled) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bool same = issame(numbers);
    std::cout << "Are all numbers same? " << (same ? "Yes" : "No") << std::endl;

    return 0;
}