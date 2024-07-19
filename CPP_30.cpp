```cpp
#include <vector>
#include <initializer_list>

std::vector<float> extract_positives(std::vector<float> numbers) {
    std::vector<float> positive_numbers;
    for (float number : numbers) {
        if (number > 0) {
            positive_numbers.push_back(number);
        }
    }
    return positive_numbers;
}

int main() {
    assert(extract_positives({}).size() == 0);
    return 0;
}