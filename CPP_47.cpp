```c
#include <cmath>
#include <vector>

float median(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    int n = numbers.size();
    if(n%2 == 0)
        return (numbers[n/2-1]+numbers[n/2])/2;
    else
        return numbers[n/2];
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 5) < 1e-4);
    return 0;
}