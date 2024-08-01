#include <vector>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<int>& numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i+1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {3, 6, 9, 12, 15};
    int threshold = 4;
    
    assert(has_close_elements(numbers, threshold) == true);

    return 0;
}