#include <iostream>
#include <vector>
#include <cmath>

int count_nums(std::vector<int> n);

int main() {
    assert (count_nums({1}) == 1);
    return 0;
}

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int num_abs = std::abs(num);
        while (num_abs > 0) {
            sum += num_abs % 10;
            num_abs /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}