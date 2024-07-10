#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
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

    std::vector<std::pair<float, float>> closest_pair;

    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i+1; j < numbers.size(); j++) {
            if(issame({numbers[i], numbers[j]}, {numbers[0], numbers[0]})) {
                if(closest_pair.size() == 0 || std::abs(numbers[j] - numbers[i]) < std::abs(numbers[1] - numbers[0])) {
                    closest_pair = {{numbers[i], numbers[j]}};
                }
                else if(std::abs(numbers[j] - numbers[i]) == std::abs(numbers[1] - numbers[0])) {
                    closest_pair.push_back({{numbers[i], numbers[j]}});
                }
            }
        }
    }

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