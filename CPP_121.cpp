```cpp
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

int main() { 
    return solution({3, 13, 2, 9}); 
}