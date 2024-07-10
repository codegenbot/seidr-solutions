```c++
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::vector<float> numbers;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    std::vector<std::pair<float, float>> closest_pair = find_closest_elements(numbers);

    if (closest_pair.size() == 0)
    {
        std::cout << "No pairs found." << std::endl;
    }
    else
    {
        for (auto& pair : closest_pair)
        {
            std::cout << "Closest pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    }

}

std::vector<std::pair<float, float>> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2)
        return {};

    std::pair<float, float> closest_pair = {numbers[0], numbers[1]};
    float min_distance = std::abs(numbers[0] - numbers[1]);

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float distance = std::abs(numbers[i] - numbers[j]);
            if (distance < min_distance) {
                min_distance = distance;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return {closest_pair};
}