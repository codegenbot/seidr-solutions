```cpp
#include <cassert>
#include <algorithm>
#include <cmath>

float median(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return ((numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0);
    else
        return numbers[numbers.size()/2];
}

int main() {
    std::vector<float> numbers = {8.0f, 1.0f, 3.0f, 9.0f, 9.0f, 2.0f, 7.0f};
    assert(abs(median(numbers) - 5.0f) < 1e-4);
    return 0;
}