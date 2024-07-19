```cpp
#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    std::vector<float> positive_numbers = get_positive(numbers);

    for(float num : positive_numbers) {
        std::cout << num << " ";
    }

    return 0;
}