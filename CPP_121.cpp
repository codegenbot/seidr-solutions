#include <initializer_list>
#include <cassert>

int solutions(std::initializer_list<int> lst) {
    int sum = 0;
    for (auto i : lst) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}