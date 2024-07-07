```cpp
#include <vector>

int solution(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int main() {
    std::vector<int> vec({3, 13, 2, 9});
    assert(solution(vec) == 16);
    return 0;
}