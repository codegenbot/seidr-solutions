```c++
#include <vector>
#include <algorithm>

float median(std::vector<float> numbers) {
    if (numbers.empty()) 
        throw std::runtime_error("Input vector is empty");
    
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return ((numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0);
    else
        return numbers[numbers.size()/2];
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7)<1e-4 );
}