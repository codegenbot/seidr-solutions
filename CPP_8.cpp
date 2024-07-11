#include <vector>

std::pair<int, int> calculateSumAndProduct(const std::vector<int>& numbers1, const std::vector<int>& numbers2) {
    int sum = 0;
    int product = 1;

    for (int num : numbers1) {
        sum += num;
        product *= num;
    }

    for (int num : numbers2) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}