```cpp
#include <cassert>
#include <vector>
#include <initializer_list>
#include <functional>

int solution(std::initializer_list<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int testMain() {
    std::vector<int> vec = {3, 13, 2, 9};
    assert(solution({3, 13, 2, 9}) == 169); 
    return 0;
}