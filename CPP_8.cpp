```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int sum_product(const int& number) {
    return number * (number + 1);
}

bool issame(const vector<int>& numbers) {
    return all_of(numbers.begin(), numbers.end(), [](const int& num){return num == num;});
}

int main() {
    assert(issame(sum_product({10, 20})) == issame({10, 10}));
    return 0;
}
```