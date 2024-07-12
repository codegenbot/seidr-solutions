#include <vector>
#include <algorithm>
#include <iostream>

std::pair<double, double> double_the_difference(std::initializer_list<int> lst) {
    std::vector<int> input_vector(lst);
    int sum_even = 0, sum_odd = 0;

    for (int num : input_vector) {
        if (num == -1)
            break;

        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    return {(double)sum_even, (double)sum_odd};
}

int main() {
    auto result = double_the_difference({1, 2, 3, 4});
    int odd_sum = 0;

    for (int i : {1, 2, 3, 4}) {
        if(i % 2 != 0)
            odd_sum += i;
    }

    return 0;
}