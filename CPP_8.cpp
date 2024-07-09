#include <vector>
#include <cassert>
#include <tuple>

bool issame(std::vector<int> a, std::vector<int> b);

std::tuple<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}