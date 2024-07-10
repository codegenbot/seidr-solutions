```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(float a, float b) {
    if (abs(a - b) < 1e-9)
        return true;
    else
        return false;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest_pairs;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (!issame(numbers[i], numbers[i + 1])) {
            pair<float, float> p = {numbers[i], numbers[i + 1]};
            closest_pairs.push_back(p);
        }
    }
    
    return closest_pairs;
}

int main 
{ 
    std::vector<float> numbers;
    float num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    
    std::vector<std::pair<float, float>> closest_pairs = find_closest_elements(numbers);
    if (!closest_pairs.empty()) {
        for (const auto& pair : closest_pairs) {
            std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    } else {
        std::cout << "No elements found." << std::endl;
    }
}