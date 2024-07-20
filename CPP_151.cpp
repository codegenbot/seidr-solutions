#include <iostream>
#include <vector>
#include <cassert>

double double_the_difference(const std::vector<float>& lst) {
    double sum = 0;
    for (size_t i = 0; i < lst.size(); i++) {
        if (i % 2 == 0) {
            sum += lst[i];
        } else {
            sum -= lst[i];
        }
    }
    return 2 * sum;
}

void solve_problem() {
    std::vector<float> lst = {1.0, 2.0, 3.0};
    double odd_sum = double_the_difference(lst);
    std::cout << odd_sum << std::endl;
    assert(double_the_difference(lst) == odd_sum);
}

int main() {
    solve_problem();
    return 0;
}