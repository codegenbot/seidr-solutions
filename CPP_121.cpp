```cpp
#include <cassert>
#include <vector>

int solution(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int vec[] = {3, 13, 2, 9};
    std::vector<int> myVec(vec, vec + sizeof(vec) / sizeof(vec[0]));
    assert(solution(myVec) == 16);
    return 0;
}