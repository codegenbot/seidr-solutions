```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void sum_product(const vector<int>& numbers, int& result) {
    for (int i = 0; i < numbers.size(); i++) {
        result += numbers[i] * (numbers[i] + 1);
    }
}

bool is_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {10};
    int result = 0;
    sum_product(numbers, result);
    assert(is_equal(result, {'10'}));
    return 0;
}
```