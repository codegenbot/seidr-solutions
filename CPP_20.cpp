#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i)
    {
        for (int j = i + 1; j < numbers.size(); ++j)
        {
            if (closest_pair.empty() || abs(numbers[j] - numbers[i]) < abs(numbers[std::get<1>(closest_pair.back())] - numbers[std::get<0>(closest_pair.back())]))
            {
                closest_pair.clear();
                closest_pair.push_back({numbers[i], numbers[j]});
            }
            else if (abs(numbers[j] - numbers[i]) == abs(numbers[std::get<1>(closest_pair.back())] - numbers[std::get<0>(closest_pair.back())]))
            {
                closest_pair.push_back({numbers[i], numbers[j]});
            }
        }
    }
    
    return closest_pair;
}

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