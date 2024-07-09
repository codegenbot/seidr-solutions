#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b);

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return std::pair<int, int>(sum, prod);
}