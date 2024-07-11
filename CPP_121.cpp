```cpp
#include <vector>

int solution(vector<int> numbers) {
    int oddSum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 != 0) {
            oddSum += numbers[i];
        }
    }
    return oddSum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 25);
    return 0;
}