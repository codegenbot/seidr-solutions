#include <vector>
#include <cmath>

bool has_close_elements(std::vector<int> numbers, int threshold) {
    for(int i = 0; i < numbers.size(); ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            if(std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    return 0;
}