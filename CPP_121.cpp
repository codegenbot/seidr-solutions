#include <cassert>
#include <vector>
#include <initializer_list>

int solution(std::initializer_list<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += i * i;
    }
    return sum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 16);
    return 0;
}