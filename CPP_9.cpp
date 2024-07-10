#include <vector>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers);

int main() {
    assert(rolling_max({3, 2, 3, 100, 3}) == std::vector<int>({3, 3, 3, 100, 100}));
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_val = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > max_val) {
                max_val = numbers[j];
            }
        }
        result.push_back(max_val);
    }
    return result;
}