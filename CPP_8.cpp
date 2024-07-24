Here is the completed code:

```cpp
#include <vector>
#include <numeric>

vector<int> sum_product(vector<int> numbers) {
    if (numbers.empty()) {
        return {0, 1};
    }
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    int product = std::accumulate(numbers.begin(), numbers.end(), 1,
                                  [](int a, int b) { return a * b; });
    return {(int)sum, (int)product};
}