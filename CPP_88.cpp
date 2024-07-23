```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;

    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    bool isOdd = (sum % 2 != 0);

    std::vector<int> result = array;
    std::sort(result.begin(), result.end(), [isOdd](int a, int b) {
        if (isOdd) return a < b;
        else return a > b;
    });

    return result;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}