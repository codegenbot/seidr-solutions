#include <vector>
#include <tuple>
#include <iostream>

std::tuple<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}