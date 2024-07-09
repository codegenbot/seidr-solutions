#include <initializer_list>
#include <cassert>

int sumOdd(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

assert(sumOdd({3, 13, 2, 9}) == 25) << "Expected sum of odd numbers to be 25 but got " << sumOdd({3, 13, 2, 9});