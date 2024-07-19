#include <vector>
#include <cassert>

int count_nums(std::vector<int> n){
    int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int numAbs = abs(num);
        while (numAbs > 0) {
            sumDigits += numAbs % 10;
            numAbs /= 10;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}