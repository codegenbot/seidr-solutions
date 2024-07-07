#include <iostream>
#include <vector>
#include <initializer_list>
#include <cassert>

int solution(std::initializer_list<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int mainTest() {
    std::vector<int> vec = {3, 13, 2, 9};
    assert(solution({1, 5, 3}) == 59);
    return 0;
}