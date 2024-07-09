#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        while (i > 0) {
            sum += i % 10;
            i /= 10;
        }
    }
    return sum;
}