```cpp
#include <vector>

int main() {
    vector<int> numbers = {10};
    auto result = sum_product(numbers);
    assert(result == 10, 10);
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sum_product(const vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (auto i : numbers) {
        sum += i;
        product *= i;
    }
    return {sum, product};
}
```